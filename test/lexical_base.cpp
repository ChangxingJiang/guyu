#include "gtest/gtest.h"
#include "objects/thd_class.h"
#include "parser/sql_lex.h"
#include "test/lexical_base.h"

/**
 * 解析一个 token
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
