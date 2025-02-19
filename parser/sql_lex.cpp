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


int yylex(YYSTYPE *yylval, Lex_input_stream *input) {
    yylval = new YYSTYPE();
    lex_states state = input->next_state;
    const std::array<lex_states, 256> lex_start_map = init_lex_start_map();
    char ch = '\0';
    while (true) {
        std::cout << "state = " << state << std::endl;
        switch (state) {
            case LEX_START:
                while (lex_start_map[ch = input->yyPeek()] == LEX_SKIP) {
                    if (ch == '\n') input->yylineno++;
                    input->yySkip();
                }
                ch = input->yyGet();
                std::cout << "ch = " << ch << std::endl;
                state = lex_start_map[ch];
                std::cout << "next_state = " << state << ", LEX_ADD = " << LEX_ADD << std::endl;
                break;
            case LEX_ADD:
                std::cout << "point1" << std::endl;
                yylval->lexer.lex_str.str = new char[2];
                std::cout << "point2" << std::endl;
                yylval->lexer.lex_str.str[0] = ch;
                std::cout << "point3" << std::endl;
                yylval->lexer.lex_str.str[1] = '\0';
                yylval->lexer.lex_str.length = 1;
                std::cout << "return = OPERATOR_ADD" << std::endl;
                return OPERATOR_ADD;
            default:
                std::cout << "return = SYSTEM_END_OF_INPUT" << std::endl;
                return SYSTEM_END_OF_INPUT;
        }
    }
}

int main(int argc, char *argv[]) {
    auto *input = new Lex_input_stream();
    input->init("+", 5);
    YYSTYPE *res1 = nullptr;
    const int res2 = yylex(res1, input);
    std::cout << "return = " << res2 << ", token = " << res1 << std::endl;
    delete input;
}
