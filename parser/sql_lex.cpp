//
// Created by Changxing on 2025/2/16.
//

#include "lex_yystype.h"
#include "sql_lex.h"
#include "sql_lex_states.h"
#include "lex_start_map.cpp"

#include <iostream>

#include "sql_yacc.tab.h"

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


int yylex(Parser_yystype *yacc_yylval, Lex_input_stream *input) {
    auto *yylval = reinterpret_cast<Lexer_yystype *>(yacc_yylval);
    input->yylval = yylval;
    lex_states state = input->next_state;

    input->start_token();
    const std::array<lex_states, 256> lex_start_map = init_lex_start_map(); // TODO 待移动为全局变量
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
            // case LEX_ZERO:  // "0"
            //     ch = input->yy_get();
            //     if (ch == 'x') {
            //         while (std::isxdigit(ch)) {
            //             ch = input->yy_get();
            //         }
            //     }
            default:
                return SYSTEM_END_OF_INPUT;
        }
    }
}

int main(int argc, char *argv[]) {
    auto *input = new Lex_input_stream();
    input->init("x'01f'", 5);
    auto res1 = new Parser_yystype();;
    const int res2 = yylex(res1, input);
    std::cout << "return = " << res2 << ", token = " << res1->lexer.lex_str << std::endl;
    delete input;
}
