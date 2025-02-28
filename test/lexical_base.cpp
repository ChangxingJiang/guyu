#include "gtest/gtest.h"
#include "objects/thd_class.h"
#include "parser/sql_lex.h"
#include "test/lexical_base.h"

/**
 * 解析一个 token，返回其类型
 * @param sql SQL 语句
 * @return Token 的类型
 */
int parse_one_token(const std::string &sql) {
    auto *input = new Lex_input_stream();
    const auto thd = new THD();
    input->init(sql.c_str(), static_cast<int>(sql.length()));
    const auto res1 = new Parser_yystype();;
    const int res2 = yylex(res1, input, thd);
    return res2;
}

/**
 * 解析两个 token，返回第 2 个 Token 的类型
 * @param sql SQL 语句
 * @return Token 的类型
 */
int parse_two_token_return_type(const std::string &sql) {
    auto *input = new Lex_input_stream();
    const auto thd = new THD();
    input->init(sql.c_str(), static_cast<int>(sql.length()));
    const auto res1 = new Parser_yystype();;
    yylex(res1, input, thd);
    const int res2 = yylex(res1, input, thd);
    return res2;
}

/**
 * 解析两个 token，返回第 2 个 Token 的值
 * @param sql SQL 语句
 * @return Token 的值
 */
std::string parse_two_token_return_value(const std::string &sql) {
    auto *input = new Lex_input_stream();
    const auto thd = new THD();
    input->init(sql.c_str(), static_cast<int>(sql.length()));
    const auto res1 = new Parser_yystype();;
    yylex(res1, input, thd);
    yylex(res1, input, thd);
    return res1->lexer.lex_str;
}
