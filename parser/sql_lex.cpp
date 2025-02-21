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
            case LEX_PLUS: // '+'
            case LEX_CARET: // '^'
            case LEX_TILDE: // '~'
            case LEX_PERCENT: // '%'
                yylval->init_lex_str(std::string(1, ch));
                return ch;
            case LEX_SUB: // '-'
                if (input->yyPeek() == '-') {
                    state = LEX_COMMENT;
                    break;
                }
                if (input->yyPeek() == '>') {
                    input->yySkip();
                    if (input->yyPeek() == '>') {
                        input->yySkip();
                        return OPERATOR_JSON_UNQUOTED_SEPARATOR_SYM;
                    }
                    return OPERATOR_JSON_SEPARATOR_SYM;
                }
                return ch;
            default:
                return SYSTEM_END_OF_INPUT;
        }
    }
}

int main(int argc, char *argv[]) {
    auto *input = new Lex_input_stream();
    input->init("->", 5);
    auto res1 = new Parser_yystype();;
    const int res2 = yylex(res1, input);
    std::cout << "return = " << res2 << ", token = " << res1->lexer.lex_str << std::endl;
    delete input;
}
