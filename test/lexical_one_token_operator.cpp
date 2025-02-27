/**
* 单个运算符 Token 解析的单元测试用例
 */

#include <iostream>

#include "gtest/gtest.h"
#include "objects/thd_class.h"
#include "test/lexical_base.h"


TEST(lexical_one_token_operator, single_char) {
    EXPECT_EQ(0x2B, parse_one_token(std::string("+")));
    EXPECT_EQ(0x5E, parse_one_token(std::string("^")));
    EXPECT_EQ(0x7E, parse_one_token(std::string("~")));
    EXPECT_EQ(0x25, parse_one_token(std::string("%")));
    EXPECT_EQ(0x2D, parse_one_token(std::string("-")));
    EXPECT_EQ(0x3C, parse_one_token(std::string("<")));
    EXPECT_EQ(0x3E, parse_one_token(std::string(">")));
    EXPECT_EQ(0x3D, parse_one_token(std::string("=")));
    EXPECT_EQ(0x21, parse_one_token(std::string("!")));
    EXPECT_EQ(0x2F, parse_one_token(std::string("/")));
    EXPECT_EQ(0x2A, parse_one_token(std::string("*")));
    EXPECT_EQ(0x26, parse_one_token(std::string("&")));
    EXPECT_EQ(0x7C, parse_one_token(std::string("|")));
}

TEST(lexical_one_token_operator, multi_char) {
    EXPECT_EQ(OPERATOR_LT_LT, parse_one_token(std::string("<<")));
    EXPECT_EQ(OPERATOR_BANG_EQ, parse_one_token(std::string("<>")));
    EXPECT_EQ(OPERATOR_LT_EQ, parse_one_token(std::string("<=")));
    EXPECT_EQ(OPERATOR_LT_EQ_GT, parse_one_token(std::string("<=>")));
    EXPECT_EQ(OPERATOR_GT_GT, parse_one_token(std::string(">>")));
    EXPECT_EQ(OPERATOR_GT_EQ, parse_one_token(std::string(">=")));
    EXPECT_EQ(OPERATOR_BANG_EQ, parse_one_token(std::string("!=")));
    EXPECT_EQ(OPERATOR_AMP_AMP, parse_one_token(std::string("&&")));
    EXPECT_EQ(OPERATOR_BAR_BAR, parse_one_token(std::string("||")));
    EXPECT_EQ(OPERATOR_COLON_EQ, parse_one_token(std::string(":=")));
    EXPECT_EQ(OPERATOR_SUB_GT, parse_one_token(std::string("->")));
    EXPECT_EQ(OPERATOR_SUB_GT_GT, parse_one_token(std::string("->>")));
}