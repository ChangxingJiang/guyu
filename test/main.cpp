#include <iostream>

#include "gtest/gtest.h"
#include "objects/thd_class.h"
#include "parser/sql_lex.h"

int lexical_test_1() {
    auto *input = new Lex_input_stream();
    auto thd = new THD();
    auto sql = std::string("SELECT abc FROM");
    input->init(sql.c_str(), static_cast<int>(sql.length()));
    auto res1 = new Parser_yystype();;
    int res2 = yylex(res1, input, thd);
    return res2;
}

TEST(add, zero) {
    EXPECT_EQ(859, lexical_test_1());
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
