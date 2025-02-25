#include "parser/sql_lex.h"
#include <iostream>

int main(int argc, char *argv[]) {
    auto *input = new Lex_input_stream();
    auto thd = new THD();
    input->init("SELECT abc FROM", 30);
    auto res1 = new Parser_yystype();;
    int res2 = yylex(res1, input, thd);
    std::cout << "return = " << res2 << ", token = " << res1->lexer.lex_str << std::endl;
    res2 = yylex(res1, input, thd);
    std::cout << "return = " << res2 << ", token = " << res1->lexer.lex_str << std::endl;
    res2 = yylex(res1, input, thd);
    std::cout << "return = " << res2 << ", token = " << res1->lexer.lex_str << std::endl;
    delete input;
}
