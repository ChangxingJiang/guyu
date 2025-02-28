/**
* 单个其他类型（标识符、）Token 解析的单元测试用例
 */

#include <iostream>

#include "gtest/gtest.h"
#include "objects/thd_class.h"
#include "test/lexical_base.h"

TEST(lexical_multi_token, ident_after_ident) {
 EXPECT_EQ(IDENT, parse_two_token_return_type(std::string("abc def")));
 EXPECT_EQ(IDENT, parse_two_token_return_type(std::string("hello hello")));
 EXPECT_EQ(IDENT, parse_two_token_return_type(std::string("谷雨 谷雨")));
 EXPECT_EQ(std::string("def"), parse_two_token_return_value(std::string("abc def")));
 EXPECT_EQ(std::string("hello"), parse_two_token_return_value(std::string("hello hello")));
 EXPECT_EQ(std::string("谷雨"), parse_two_token_return_value(std::string("谷雨 谷雨")));
}

TEST(lexical_multi_token, ident_after_keyword) {
 EXPECT_EQ(IDENT, parse_two_token_return_type(std::string("SELECT def")));
 EXPECT_EQ(IDENT, parse_two_token_return_type(std::string("SELECT hello")));
 EXPECT_EQ(IDENT, parse_two_token_return_type(std::string("SELECT 谷雨")));
 EXPECT_EQ(std::string("def"), parse_two_token_return_value(std::string("SELECT def")));
 EXPECT_EQ(std::string("hello"), parse_two_token_return_value(std::string("SELECT hello")));
 EXPECT_EQ(std::string("谷雨"), parse_two_token_return_value(std::string("SELECT 谷雨")));
}
