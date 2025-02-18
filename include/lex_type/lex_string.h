/**
 * 词法解析
 */

#ifndef LEX_STRING_H
#define LEX_STRING_H

/**
 * 词法解析结果 Token 的字符串类型
 */
struct LEX_STRING {
    char *str{};
    size_t length{};
};

#endif //LEX_STRING_H
