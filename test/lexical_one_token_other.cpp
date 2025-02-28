/**
* 单个其他类型（标识符、）Token 解析的单元测试用例
 */

#include <iostream>

#include "gtest/gtest.h"
#include "objects/thd_class.h"
#include "test/lexical_base.h"

TEST(lexical_one_token_other, ident) {
    EXPECT_EQ(IDENT, parse_one_token(std::string("abc")));
    EXPECT_EQ(IDENT, parse_one_token(std::string("hello")));
    EXPECT_EQ(IDENT, parse_one_token(std::string("谷雨")));
}

TEST(lexical_one_token_other, special_ident) {
    EXPECT_EQ(IDENT, parse_one_token(std::string("b")));
    EXPECT_EQ(IDENT, parse_one_token(std::string("B")));
    EXPECT_EQ(IDENT, parse_one_token(std::string("x")));
    EXPECT_EQ(IDENT, parse_one_token(std::string("X")));
    EXPECT_EQ(IDENT, parse_one_token(std::string("n")));
    EXPECT_EQ(IDENT, parse_one_token(std::string("N")));
    EXPECT_EQ(IDENT, parse_one_token(std::string("0b")));
    EXPECT_EQ(IDENT, parse_one_token(std::string("0B")));
    EXPECT_EQ(IDENT, parse_one_token(std::string("0x")));
    EXPECT_EQ(IDENT, parse_one_token(std::string("0X")));
    EXPECT_EQ(IDENT, parse_one_token(std::string("bbb")));
    EXPECT_EQ(IDENT, parse_one_token(std::string("BbB")));
    EXPECT_EQ(IDENT, parse_one_token(std::string("xxx")));
    EXPECT_EQ(IDENT, parse_one_token(std::string("XXX")));
    EXPECT_EQ(IDENT, parse_one_token(std::string("nnn")));
    EXPECT_EQ(IDENT, parse_one_token(std::string("NNN")));
    EXPECT_EQ(IDENT, parse_one_token(std::string("035ABC")));
    EXPECT_EQ(IDENT, parse_one_token(std::string("035_DEF")));
    EXPECT_EQ(SYSTEM_ABORT, parse_one_token(std::string("3EFG")));
    EXPECT_EQ(SYSTEM_ABORT, parse_one_token(std::string("0.3EFG")));
}

TEST(lexical_one_token_other, ident_quoted) {
    EXPECT_EQ(IDENT_QUOTED, parse_one_token(std::string("`abc`")));
    EXPECT_EQ(IDENT_QUOTED, parse_one_token(std::string("`hello`")));
    EXPECT_EQ(IDENT_QUOTED, parse_one_token(std::string("`谷雨`")));
}
