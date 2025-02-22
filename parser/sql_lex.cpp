//
// Created by Changxing on 2025/2/16.
//

#include "lex_yystype.h"
#include "sql_lex.h"
#include "sql_lex_states.h"
#include "lex_start_map.cpp"

#include <iostream>

#include "sql_yacc.tab.h"
#include "objects/thd_class.h"

char *yytext;

bool Lex_input_stream::init(char *buffer, int length) {
    reset(buffer, length);
    return true;
}

void Lex_input_stream::reset(char *buffer, int length) {
    yylineno = 1;
    yylval = nullptr;
    m_buf = buffer;
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

static inline int int_token(const char *str, uint length) {
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


int yylex(Parser_yystype *yacc_yylval, Lex_input_stream *input, THD *thd) {
    auto *yylval = reinterpret_cast<Lexer_yystype *>(yacc_yylval);
    input->yylval = yylval;
    lex_states state = input->next_state;

    input->start_token();
    const std::array<lex_states, 256> lex_start_map = thd->get_lex_start_map();
    const std::array<uint8_t, 256> lex_ident_map = thd->get_lex_ident_map();
    char ch = '\0';
    while (true) {
        switch (state) {
            case LEX_START:
                while (lex_start_map[ch = input->yy_peek()] == LEX_SKIP) {
                    if (ch == '\n') input->yylineno++;
                    input->yy_skip();
                }
                ch = input->yy_get();
                state = lex_start_map[ch];
                break;

            /* 运算符解析逻辑 */
            case LEX_PLUS: // "+"
            case LEX_CARET: // "^"
            case LEX_TILDE: // "~"
            case LEX_PERCENT: // "%"
            case LEX_EQ: // "="
            case LEX_STAR: // "*"
                yylval->init_lex_str(std::string(1, ch));
                return ch;
            case LEX_SUB: // "-"
                if (input->yy_peek() == '-') {
                    input->yy_skip();
                    state = LEX_COMMENT;
                    break;
                }
                if (input->yy_peek() == '>') {
                    input->yy_skip();
                    if (input->yy_peek() == '>') {
                        input->yy_skip();
                        return OPERATOR_JSON_UNQUOTED_SEPARATOR; // "->>"
                    }
                    return OPERATOR_JSON_SEPARATOR; // "->"
                }
                return ch;
            case LEX_LT: // "<"
                if (input->yy_peek() == '>') {
                    input->yy_skip();
                    return OPERATOR_NE; // "<>"
                }
                if (input->yy_peek() == '<') {
                    input->yy_skip();
                    return OPERATOR_SHIFT_LEFT; // "<<"
                }
                if (input->yy_peek() == '=') {
                    input->yy_skip();
                    if (input->yy_peek() == '>') {
                        return OPERATOR_EQUAL; // "<=>"
                    }
                    return OPERATOR_LE; // "<="
                }
                return OPERATOR_LT; // "<"
            case LEX_GT: // ">"
                if (input->yy_peek() == '>') {
                    input->yy_skip();
                    return OPERATOR_SHIFT_RIGHT; // ">>"
                }
                if (input->yy_peek() == '=') {
                    input->yy_skip();
                    return OPERATOR_GE; // ">="
                }
                return OPERATOR_GT; // ">"
            case LEX_BANG: // "!"
                if (input->yy_peek() == '=') {
                    input->yy_skip();
                    return OPERATOR_NE; // "!="
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
                    return OPERATOR_AND_AND; // "&&"
                }
                return ch;
            case LEX_BAR: // "|"
                if (input->yy_peek() == '|') {
                    input->yy_skip();
                    return OPERATOR_OR_OR;
                }
                return ch;
            case LEX_COLON: // ":"
                if (input->yy_peek() == '=') {
                    input->yy_skip();
                    return OPERATOR_SET_VAR;
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
                if (input->yy_peek() == 'x') {
                    input->yy_skip();
                    ch = input->yy_get();
                    while (std::isxdigit(ch)) {
                        ch = input->yy_get();
                    }
                    if (!lex_ident_map[ch]) {
                        yylval->init_lex_str(std::string(input->get_tok_start() + 2, input->yy_length() - 2));
                        return LITERAL_HEX_NUM;
                    }
                    input->yy_unget();
                    state = LEX_IDENT;
                    break;
                }
                if (input->yy_peek() == 'b') {
                    input->yy_skip();
                    ch = input->yy_get();
                    while (ch == '0' || ch == '1') {
                        ch = input->yy_get();
                    }
                    if (!lex_ident_map[ch]) {
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
                yylval->init_lex_str(std::string(input->get_tok_start(), input->yy_length()));
                return LITERAL_DECIMAL_NUM;
            case LEX_NUMBER_E:
                ch = input->yy_get();
                if (ch == '-' || ch == '+') ch = input->yy_get();
                if (!std::isdigit(ch)) return SYSTEM_ABORT;
                while (std::isdigit(ch)) {
                    ch = input->yy_get();
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
            default:
                return SYSTEM_END_OF_INPUT;
        }
    }
}


int main(int argc, char *argv[]) {
    auto *input = new Lex_input_stream();
    auto thd = new THD();
    input->init(".56e5", 5);
    auto res1 = new Parser_yystype();;
    const int res2 = yylex(res1, input, thd);
    std::cout << "return = " << res2 << ", token = " << res1->lexer.lex_str << std::endl;
    delete input;
}
