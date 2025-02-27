/**
 * 单个字面值 Token 解析的单元测试用例
 */

#include <iostream>

#include "gtest/gtest.h"
#include "objects/thd_class.h"
#include "test/lexical_base.h"

TEST(lexical_one_token_literal, bin_num) {
    EXPECT_EQ(LITERAL_BIN_NUM, parse_one_token(std::string("0b01")));
    EXPECT_EQ(LITERAL_BIN_NUM, parse_one_token(std::string("0b11")));
    EXPECT_EQ(LITERAL_BIN_NUM, parse_one_token(std::string("0B11")));
    EXPECT_EQ(LITERAL_BIN_NUM, parse_one_token(std::string("b'01'")));
    EXPECT_EQ(LITERAL_BIN_NUM, parse_one_token(std::string("b'11'")));
    EXPECT_EQ(LITERAL_BIN_NUM, parse_one_token(std::string("B'11'")));
}

TEST(lexical_one_token_literal, hex_num) {
    EXPECT_EQ(LITERAL_HEX_NUM, parse_one_token(std::string("0x0F")));
    EXPECT_EQ(LITERAL_HEX_NUM, parse_one_token(std::string("0xC1")));
    EXPECT_EQ(LITERAL_HEX_NUM, parse_one_token(std::string("0XC1")));
    EXPECT_EQ(LITERAL_HEX_NUM, parse_one_token(std::string("x'0F'")));
    EXPECT_EQ(LITERAL_HEX_NUM, parse_one_token(std::string("x'C1'")));
    EXPECT_EQ(LITERAL_HEX_NUM, parse_one_token(std::string("X'C1'")));
}

TEST(lexical_one_token_literal, decimal_num) {
    EXPECT_EQ(LITERAL_DECIMAL_NUM, parse_one_token(std::string("0.01")));
    EXPECT_EQ(LITERAL_DECIMAL_NUM, parse_one_token(std::string(".02")));
    EXPECT_EQ(LITERAL_DECIMAL_NUM, parse_one_token(std::string("3.03")));
}

TEST(lexical_one_token_literal, float_num) {
    EXPECT_EQ(LITERAL_FLOAT_NUM, parse_one_token(std::string("1e-6")));
    EXPECT_EQ(LITERAL_FLOAT_NUM, parse_one_token(std::string("1.3E8")));
    EXPECT_EQ(LITERAL_FLOAT_NUM, parse_one_token(std::string(".3e5")));
}

TEST(lexical_one_token_literal, num) {
    EXPECT_EQ(LITERAL_NUM, parse_one_token(std::string("3")));
    EXPECT_EQ(LITERAL_NUM, parse_one_token(std::string("123456789")));
}

TEST(lexical_one_token_literal, long_num) {
    EXPECT_EQ(LITERAL_LONG_NUM, parse_one_token(std::string("123456789123456789")));
    EXPECT_EQ(LITERAL_LONG_NUM, parse_one_token(std::string("123456789123456789")));
}

TEST(lexical_one_token_literal, ulonglong_num) {
    EXPECT_EQ(LITERAL_ULONGLONG_NUM, parse_one_token(std::string("12345678912345678912")));
}

TEST(lexical_one_token_literal, text_string) {
    EXPECT_EQ(LITERAL_TEXT_STRING, parse_one_token(std::string("'abcd'")));
    EXPECT_EQ(LITERAL_TEXT_STRING, parse_one_token(std::string("'abc\'d'")));
    EXPECT_EQ(LITERAL_TEXT_STRING, parse_one_token(std::string("'abc\\d'")));
}
