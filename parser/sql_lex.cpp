//
// Created by Changxing on 2025/2/16.
//

#include "lex_yystype.h"
#include "sql_lex.h"
#include "sql_lex_states.h"
#include "lex_start_map.h"

#include <iostream>

#include "sql_yacc.tab.h"
#include "objects/thd_class.h"
#include "include/string_utils.h"

char *yytext;

bool Lex_input_stream::init(const char *buffer, int length) {
    reset(buffer, length);
    return true;
}

void Lex_input_stream::reset(const char *buffer, int length) {
    yylineno = 1;
    yylval = nullptr;
    m_buf = buffer;
    m_end_of_buf = buffer + length;
    m_buf_length = length;
    m_ptr = buffer;
}


static constexpr uint LONG_LEN = 10; // 整型的最大长度 & 长整型的最小长度
static constexpr uint LEN_LONGLONG_MAX = 19;
static constexpr uint SIGNED_LONGLONG_LEN = 19;
static constexpr uint UNSIGNED_LONGLONG_LEN = 20;
static auto LONG_STR = "2147483647";
static auto SIGNED_LONG_STR = "-2147483648";
static auto LONGLONG_STR = "9223372036854775807";
static auto SIGNED_LONGLONG_STR = "-9223372036854775808";
static auto UNSIGNED_LONGLONG_STR = "18446744073709551615";

static int int_token(const char *str, uint length) {
    // 【启发式】快速处理常见场景
    if (length < LONG_LEN) return LITERAL_NUM;

    // 移除符号
    bool neg = false;
    if (*str == '+') {
        str++;
        length--;
    } else if (*str == '-') {
        str++;
        length--;
        neg = true;
    }

    // 移除前置 0
    while (*str == '0' && length) {
        str++;
        length--;
    }

    // 处理短整数
    if (length < LONG_LEN) return LITERAL_NUM;

    int smaller, bigger;
    const char *cmp;
    if (neg) {
        if (length == LONG_LEN) {
            cmp = SIGNED_LONG_STR + 1;
            smaller = LITERAL_NUM; // If <= signed_long_str
            bigger = LITERAL_LONG_NUM; // If >= signed_long_str
        } else if (length < SIGNED_LONGLONG_LEN)
            return LITERAL_LONG_NUM; // 整型的最大长度 < length < 长整型的最短长度
        else if (length > SIGNED_LONGLONG_LEN)
            return LITERAL_DECIMAL_NUM; // 长整型的最短长度 < length
        else {
            cmp = SIGNED_LONGLONG_STR + 1;
            smaller = LITERAL_LONG_NUM; // If <= signed_longlong_str
            bigger = LITERAL_DECIMAL_NUM;
        }
    } else {
        if (length == LONG_LEN) {
            cmp = LONG_STR;
            smaller = LITERAL_NUM;
            bigger = LITERAL_LONG_NUM;
        } else if (length < LEN_LONGLONG_MAX)
            return LITERAL_LONG_NUM;
        else if (length > LEN_LONGLONG_MAX) {
            if (length > UNSIGNED_LONGLONG_LEN) return LITERAL_DECIMAL_NUM;
            cmp = UNSIGNED_LONGLONG_STR;
            smaller = LITERAL_ULONGLONG_NUM;
            bigger = LITERAL_DECIMAL_NUM;
        } else {
            cmp = LONGLONG_STR;
            smaller = LITERAL_LONG_NUM;
            bigger = LITERAL_ULONGLONG_NUM;
        }
    }
    while (*cmp && *cmp++ == *str++) {
    }
    return static_cast<uchar>(str[-1]) <= static_cast<uchar>(cmp[-1]) ? smaller : bigger;
}


static std::string find_mark(Lex_input_stream *input, const uchar mark) {
    std::string result{};
    uchar ch = input->yy_peek();
    while (ch != '\0') {
        if (ch == '\\') {
            if (input->eof()) return result;
            input->yy_skip();
            ch = input->yy_get();
            switch (ch) {
                case 'n':
                    result.push_back('\n');
                    break;
                case 't':
                    result.push_back('\t');
                    break;
                case 'r':
                    result.push_back('\r');
                    break;
                case 'b':
                    result.push_back('\b');
                    break;
                case '0':
                    result.push_back(0); // ASCII null
                    break;
                case '_':
                case '%':
                    result.push_back('\\'); // 保留通配符之前的下划线
                    [[fallthrough]];
                default:
                    result.push_back(static_cast<char>(ch));
                    break;
            }
        } else if (ch == mark) {
            input->yy_skip();
            if (input->yy_peek() == mark) {
                result.push_back(static_cast<char>(mark));
                input->yy_skip();
            } else {
                return result;
            }
        } else {
            const uint8_t char_length = get_utf8_char_length(ch);
            result.append(input->get_ptr(), char_length);
            // std::cout << "char_length=" << int(char_length) << ", char_value=" << std::string(
            // input->get_ptr(), char_length) << std::endl;
            input->yy_skip(char_length);
        }
        ch = input->yy_peek();
    }
    return result; // unexpected end of query
}

/**
 * 跳过标识符中的字符
 *
 * @param input 词法解析器输入流管理器
 * @param lex_ident_map 标识符状态映射器 TODO 待优化注释名称
 */
static void skip_ident(Lex_input_stream *input, const std::array<uint8_t, 256> &lex_ident_map) {
    uchar ch = input->yy_peek();
    // std::cout << "skip_ident: ch = " << int(ch) << std::endl;
    while (lex_ident_map[ch]) {
        const uint8_t char_length = get_utf8_char_length(ch);
        input->yy_skip(char_length);
        ch = input->yy_peek();
        // std::cout << "skip_ident: ch = " << int(ch) << std::endl;
    }
}


int yylex(Parser_yystype *yacc_yylval, Lex_input_stream *input, THD *thd) {
    auto *yylval = reinterpret_cast<Lexer_yystype *>(yacc_yylval);
    input->yylval = yylval;
    lex_states state = input->next_state;
    input->next_state = LEX_START;

    input->start_token();
    const std::array<lex_states, 256> lex_start_map = thd->get_lex_start_map();
    const std::array<uint8_t, 256> lex_ident_map = thd->get_lex_ident_map(); // TODO 待考虑是否需要优化类型
    const std::unordered_map<std::string, int> &lex_keyword_map = thd->get_lex_keyword_map();
    uchar ch = '\0';
    std::string ident_or_keyword{};
    while (true) {
        // std::cout << "state: " << state << ", char: " << input->yy_peek() << std::endl;
        switch (state) {
            case LEX_START:
                while (lex_start_map[ch = input->yy_peek()] == LEX_SKIP) {
                    if (ch == '\n') input->yylineno++;
                    input->yy_skip();
                    // std::cout << "跳过: ch = " << int(input->yy_peek()) << std::endl;
                }
                input->start_token(); // 重置 Token 开始位置，将当前指针指向的位置作为 Token 的起始位置
                ch = input->yy_get();
                state = lex_start_map[ch];
            // std::cout << "LEX_START 变更状态: ch = " << int(ch) << ", state = " << state << std::endl;
                break;

            /* 运算符解析逻辑 */
            case LEX_PLUS: // "+"
            case LEX_CARET: // "^"
            case LEX_TILDE: // "~"
            case LEX_PERCENT: // "%"
            case LEX_EQ: // "="
            case LEX_STAR: // "*"
            case LEX_LPAREN: // "("
            case LEX_RPAREN: // ")"
            case LEX_COMMA: // ","
            case LEX_LBRACE: // "{"
            case LEX_RBRACE: // "}"
                yylval->init_lex_str(std::string(1, static_cast<char>(ch)));
                return ch;
            case LEX_QUES: // "?" TODO 待增加预编译模式的检查
                yylval->init_lex_str(std::string(1, static_cast<char>(ch)));
                return PARAM_MARKER;
            case LEX_SUB: // "-"
                if (input->yy_peek() == '-') {
                    input->yy_skip(); // TODO 考虑是否需要检查 -- 之后的空格
                    state = LEX_COMMENT;
                    break;
                }
                if (input->yy_peek() == '>') {
                    input->yy_skip();
                    if (input->yy_peek() == '>') {
                        input->yy_skip();
                        return OPERATOR_SUB_GT_GT; // "->>"
                    }
                    return OPERATOR_SUB_GT; // "->"
                }
                return ch;
            case LEX_LT: // "<"
                if (input->yy_peek() == '>') {
                    input->yy_skip();
                    return OPERATOR_BANG_EQ; // "<>"
                }
                if (input->yy_peek() == '<') {
                    input->yy_skip();
                    return OPERATOR_LT_LT; // "<<"
                }
                if (input->yy_peek() == '=') {
                    input->yy_skip();
                    if (input->yy_peek() == '>') {
                        return OPERATOR_LT_EQ_GT; // "<=>"
                    }
                    return OPERATOR_LT_EQ; // "<="
                }
                return '<'; // "<"
            case LEX_GT: // ">"
                if (input->yy_peek() == '>') {
                    input->yy_skip();
                    return OPERATOR_GT_GT; // ">>"
                }
                if (input->yy_peek() == '=') {
                    input->yy_skip();
                    return OPERATOR_GT_EQ; // ">="
                }
                return '>'; // ">"
            case LEX_BANG: // "!"
                if (input->yy_peek() == '=') {
                    input->yy_skip();
                    return OPERATOR_BANG_EQ; // "!="
                }
                return ch;
            case LEX_SLASH: // "/"
                if (input->yy_peek() == '*') {
                    input->yy_skip();
                    state = LEX_LONG_COMMENT;
                    break;
                }
                return ch;
            case LEX_AMP: // "&"
                if (input->yy_peek() == '&') {
                    input->yy_skip();
                    return OPERATOR_AMP_AMP; // "&&"
                }
                return ch;
            case LEX_BAR: // "|"
                if (input->yy_peek() == '|') {
                    input->yy_skip();
                    return OPERATOR_BAR_BAR;
                }
                return ch;
            case LEX_COLON: // ":"
                if (input->yy_peek() == '=') {
                    input->yy_skip();
                    return OPERATOR_COLON_EQ;
                }
                return SYSTEM_ABORT;

            /* 字面值 */
            case LEX_IDENT_OR_BIN: // "[bB]"
                if (input->yy_peek() == '\'') {
                    input->yy_skip();
                    state = LEX_BIN_NUMBER;
                } else {
                    state = LEX_IDENT;
                }
                break;
            case LEX_BIN_NUMBER: // "[bB]'"
                ch = input->yy_get();
                while (ch == '0' || ch == '1') {
                    ch = input->yy_get();
                }
                if (ch != '\'') return SYSTEM_ABORT;
                input->yy_skip();
                yylval->init_lex_str(std::string(input->get_tok_start() + 2, input->yy_length() - 3));
                return LITERAL_BIN_NUM;
            case LEX_IDENT_OR_HEX: // "[xX]"
                if (input->yy_peek() == '\'') {
                    input->yy_skip();
                    state = LEX_HEX_NUMBER;
                } else {
                    state = LEX_IDENT;
                }
                break;
            case LEX_HEX_NUMBER: // "[xX]'"
                ch = input->yy_get();
                while (std::isxdigit(ch)) {
                    ch = input->yy_get();
                }
                if (ch != '\'') return SYSTEM_ABORT;
                input->yy_skip();
                yylval->init_lex_str(std::string(input->get_tok_start() + 2, input->yy_length() - 3));
                return LITERAL_HEX_NUM;
            case LEX_ZERO: // "0"
                if (input->yy_peek() == 'x' || input->yy_peek() == 'X') {
                    input->yy_skip();
                    ch = input->yy_get();
                    while (std::isxdigit(ch)) {
                        ch = input->yy_get();
                    }
                    if (!lex_ident_map[ch] && input->yy_length() > 2) {
                        yylval->init_lex_str(std::string(input->get_tok_start() + 2, input->yy_length() - 2));
                        return LITERAL_HEX_NUM;
                    }
                    input->yy_unget();
                    state = LEX_IDENT;
                    break;
                }
                if (input->yy_peek() == 'b' || input->yy_peek() == 'B') {
                    input->yy_skip();
                    ch = input->yy_get();
                    while (ch == '0' || ch == '1') {
                        ch = input->yy_get();
                    }
                    if (!lex_ident_map[ch] && input->yy_length() > 2) {
                        yylval->init_lex_str(std::string(input->get_tok_start() + 2, input->yy_length() - 2));
                        return LITERAL_BIN_NUM;
                    }
                    input->yy_unget();
                    state = LEX_IDENT;
                    break;
                }
                state = LEX_NUMBER;
                break;
            case LEX_NUMBER: // [0-9]+
                ch = input->yy_get();
                while (std::isdigit(ch)) {
                    ch = input->yy_get();
                }
                if (ch == 'e' || ch == 'E') {
                    state = LEX_NUMBER_E;
                    break;
                }
                if (ch == '.') {
                    state = LEX_NUMBER_DOT;
                    break;
                }
                if (lex_ident_map[ch]) {
                    state = LEX_IDENT;
                    break;
                }
                yylval->init_lex_str(std::string(input->get_tok_start(), input->yy_length()));
                return int_token(yylval->lex_str.c_str(), yylval->lex_str.length());
            case LEX_NUMBER_DOT:
                // 解析剩余的小数部分
                ch = input->yy_get();
                while (std::isdigit(ch)) {
                    ch = input->yy_get();
                }
                if (ch == 'e' || ch == 'E') {
                    state = LEX_NUMBER_E;
                    break;
                }
                if (lex_ident_map[ch]) {
                    state = LEX_IDENT;
                    break;
                }
                yylval->init_lex_str(std::string(input->get_tok_start(), input->yy_length()));
                return LITERAL_DECIMAL_NUM;
            case LEX_NUMBER_E:
                ch = input->yy_get();
                if (ch == '-' || ch == '+') ch = input->yy_get();
                if (!std::isdigit(ch)) return SYSTEM_ABORT;
                while (std::isdigit(ch)) {
                    ch = input->yy_get();
                }
                if (lex_ident_map[ch]) {
                    state = LEX_IDENT;
                    break;
                }
                yylval->init_lex_str(std::string(input->get_tok_start(), input->yy_length()));
                return LITERAL_FLOAT_NUM;
            case LEX_DOT:
                if (std::isdigit(input->yy_peek())) {
                    state = LEX_NUMBER_DOT;
                } else {
                    state = LEX_IDENT_SEP_START;
                    input->yy_unget();
                }
                break;
            case LEX_STRING:
                yylval->init_lex_str(find_mark(input, static_cast<char>(ch)));
                return LITERAL_TEXT_STRING;
            case LEX_IDENT_OR_NCHAR:
                if (input->yy_peek() != '\'') {
                    state = LEX_IDENT;
                    break;
                }
                input->yy_skip();
                yylval->init_lex_str(find_mark(input, static_cast<char>(ch)));
                return LITERAL_NCHAR_STRING;

            /* 标识符 + 关键字 */
            case LEX_IDENT:
                input->yy_unget();
                skip_ident(input, lex_ident_map); // 不断匹配数字、字母和多字节字符直至遇到其他字符

                ident_or_keyword = std::string(input->get_tok_start(), input->yy_length() + 1); // 获取当前标识符 or 关键字
                yylval->init_lex_str(ident_or_keyword);

                while (lex_start_map[ch = input->yy_peek()] == LEX_SKIP) {
                    if (ch == '\n') input->yylineno++;
                    input->yy_skip(); // 跳过后续空格
                }

            // std::cout << "[LEX_IDENT - 1] ch = " << int(ch)
            // << ", input->yy_peek(1) = " << int(input->yy_peek(1))
            // << ", lex_ident_map[input->yy_peek(1)] = " << bool(lex_ident_map[input->yy_peek(1)]) <<
            // std::endl;

                if (ch == '.' && lex_ident_map[input->yy_peek(1)]) {
                    // 判断下一个字符是否为 . 且之后也是标识符 TODO 这里需要考虑如何优化
                    input->next_state = LEX_IDENT_SEP_START;
                    return IDENT; // TODO 需考虑是否包含多字节字符的问题
                }

                to_lowercase(ident_or_keyword);
                if (lex_keyword_map.count(ident_or_keyword) > 0) {
                    // 判断当前语法元素是否为关键字
                    return lex_keyword_map.at(ident_or_keyword);
                }

                return IDENT; // TODO 待未支持 charset 名称解析 + 需考虑是否包含多字节字符的问题

            case LEX_IDENT_SEP_START:
                ch = input->yy_get(); // should be '.'
                yylval->init_lex_str(std::string(1, static_cast<char>(ch)));
                if (lex_ident_map[input->yy_peek()]) {
                    input->next_state = LEX_IDENT_START;
                } else {
                    input->next_state = LEX_START;
                }
                return ch;

            case LEX_IDENT_START:
                skip_ident(input, lex_ident_map); // 不断匹配数字、字母和多字节字符直至遇到其他字符

            // std::cout << "构造时的状态: yy_length = " << input->yy_length() << std::endl;

                yylval->init_lex_str(std::string(input->get_tok_start(), input->yy_length() + 1));

                ch = input->yy_peek();
                while (lex_start_map[ch] == LEX_SKIP) {
                    ch = input->yy_get(); // 跳过后续空格
                    if (ch == '\n') input->yylineno++;
                }

                if (ch == '.' && lex_ident_map[input->yy_peek()]) {
                    // 判断下一个字符是否为 . 且之后也是标识符 TODO 这里需要考虑如何优化
                    input->next_state = LEX_IDENT_SEP_START;
                }

                return IDENT;

            /* 单行注释 */
            case LEX_COMMENT:
                ch = input->yy_get();
                while (ch != '\n' && ch != '\0') {
                    ch = input->yy_get();
                }
                if (ch == '\n') input->yylineno++;
                state = LEX_START; // 继续尝试匹配字符
                input->start_token(); // TODO 考虑是否需要区分 start_token 和 reset_token
                break;

            /* 特殊符号 */
            case LEX_AT:
                yylval->init_lex_str(std::string(1, static_cast<char>(ch)));
                if (input->yy_peek() == '@') {
                    input->next_state = LEX_AT_AT;
                } else if (input->yy_peek() != '\'' || input->yy_peek() != '"' || input->yy_peek() != '`') {
                    input->next_state = LEX_AT_END;
                }
                return '@';
            case LEX_AT_AT:
                ch = input->yy_get(); // @
                yylval->init_lex_str(std::string(1, static_cast<char>(ch)));
                if (input->yy_peek() != '`') {
                    input->next_state = LEX_AT_AT_END;
                }
                return '@';
            case LEX_AT_AT_END:
                ch = input->yy_peek();
                while (lex_ident_map[ch]) {
                    ch = input->yy_get();
                }

                if (ch == '.') input->next_state = LEX_IDENT_SEP_START;

                yylval->init_lex_str(std::string(input->get_tok_start(), input->yy_length()));
                to_lowercase(ident_or_keyword);
                if (lex_keyword_map.count(ident_or_keyword) > 0) {
                    // 判断当前语法元素是否为关键字
                    return lex_keyword_map.at(ident_or_keyword);
                }
                return IDENT;

            case LEX_AT_END:
                ch = input->yy_peek();
                while (std::isalnum(ch) || ch == '_' || ch == '$' || ch == '.') {
                    ch = input->yy_get();
                }
                yylval->init_lex_str(std::string(input->get_tok_start(), input->yy_length()));
                return LEX_HOSTNAME;

            case LEX_STRING_OR_DELIMITER:
                state = LEX_STRING; // TODO 待增加作为反引号的模式
                break;

            case LEX_DELIMITER:
                yylval->init_lex_str(find_mark(input, static_cast<char>(ch)));
                input->yy_skip(); // `
                return IDENT_QUOTED;

            default:
                return SYSTEM_END_OF_INPUT;
        }
    }
}
