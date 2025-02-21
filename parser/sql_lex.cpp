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
    const std::array<lex_states, 256> lex_start_map = init_lex_start_map();
    char ch = '\0';
    while (true) {
        switch (state) {
            case LEX_START:
                while (lex_start_map[ch = input->yyPeek()] == LEX_SKIP) {
                    if (ch == '\n') input->yylineno++;
                    input->yySkip();
                }
                ch = input->yyGet();
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
                if (input->yyPeek() == '-') {
                    input->yySkip();
                    state = LEX_COMMENT;
                    break;
                }
                if (input->yyPeek() == '>') {
                    input->yySkip();
                    if (input->yyPeek() == '>') {
                        input->yySkip();
                        return OPERATOR_JSON_UNQUOTED_SEPARATOR_SYM; // "->>"
                    }
                    return OPERATOR_JSON_SEPARATOR_SYM; // "->"
                }
                return ch;
            case LEX_LT: // "<"
                if (input->yyPeek() == '>') {
                    input->yySkip();
                    return OPERATOR_NE; // "<>"
                }
                if (input->yyPeek() == '<') {
                    input->yySkip();
                    return OPERATOR_SHIFT_LEFT; // "<<"
                }
                if (input->yyPeek() == '=') {
                    input->yySkip();
                    if (input->yyPeek() == '>') {
                        return OPERATOR_EQUAL; // "<=>"
                    }
                    return OPERATOR_LE; // "<="
                }
                return OPERATOR_LT; // "<"
            case LEX_GT: // ">"
                if (input->yyPeek() == '>') {
                    input->yySkip();
                    return OPERATOR_SHIFT_RIGHT; // ">>"
                }
                if (input->yyPeek() == '=') {
                    input->yySkip();
                    return OPERATOR_GE; // ">="
                }
                return OPERATOR_GT; // ">"
            case LEX_BANG: // "!"
                if (input->yyPeek() == '=') {
                    input->yySkip();
                    return OPERATOR_NE; // "!="
                }
                return ch;
            case LEX_SLASH: // "/"
                if (input->yyPeek() == '*') {
                    input->yySkip();
                    state = LEX_LONG_COMMENT;
                    break;
                }
                return ch;
            case LEX_AMP: // "&"
                if (input->yyPeek() == '&') {
                    input->yySkip();
                    return OPERATOR_AND_AND; // "&&"
                }
                return ch;
            case LEX_BAR: // "|"
                if (input->yyPeek() == '|') {
                    input->yySkip();
                    return OPERATOR_OR_OR;
                }
                return ch;
            case LEX_COLON: // ":"
                if (input->yyPeek() == '=') {
                    input->yySkip();
                    return OPERATOR_SET_VAR;
                }
                return SYSTEM_ABORT;
            default:
                return SYSTEM_END_OF_INPUT;
        }
    }
}

int main(int argc, char *argv[]) {
    auto *input = new Lex_input_stream();
    input->init("=", 5);
    auto res1 = new Parser_yystype();;
    const int res2 = yylex(res1, input);
    std::cout << "return = " << res2 << ", token = " << res1 << std::endl;
    delete input;
}
