//
// Created by Changxing on 2025/2/27.
//

#ifndef LEXICAL_BASE_H
#define LEXICAL_BASE_H

/**
 * 解析一个 token，返回其类型
 * @param sql SQL 语句
 * @return Token 的类型
 */
int parse_one_token(const std::string &sql);

/**
 * 解析两个 token，返回第 2 个 Token 的类型
 * @param sql SQL 语句
 * @return Token 的类型
 */
int parse_two_token_return_type(const std::string &sql);

/**
 * 解析两个 token，返回第 2 个 Token 的值
 * @param sql SQL 语句
 * @return Token 的值
 */
std::string parse_two_token_return_value(const std::string &sql);

#endif //LEXICAL_BASE_H
