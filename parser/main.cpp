#include "parser/sql_lex.h"
#include <iostream>

int main(int argc, char *argv[]) {
    auto *input = new Lex_input_stream();
    auto thd = new THD();
    auto sql = std::string("0b01");
    // auto sql = std::string("0xc1");
    // auto sql = std::string("-589");
    // auto sql = std::string("-123456789123456789");
    input->init(sql.c_str(), static_cast<int>(sql.length()));
    auto res1 = new Parser_yystype();;
    int res2 = yylex(res1, input, thd);
    std::cout << "return = " << res2 << ", token = " << res1->lexer.lex_str << std::endl;
    // res2 = yylex(res1, input, thd);
    // std::cout << "return = " << res2 << ", token = " << res1->lexer.lex_str << std::endl;
    // res2 = yylex(res1, input, thd);
    // std::cout << "return = " << res2 << ", token = " << res1->lexer.lex_str << std::endl;
    delete input;
}
