//
// Created by Changxing on 2025/2/17.
//

#ifndef SQL_LEX_STATES_H
#define SQL_LEX_STATES_H

/**
 * 词法解析器自动机状态的枚举类
 */
enum lex_states {
    // 开始和结束状态
    LEX_START, // 初始状态
    LEX_EOF, // \x00
    LEX_END, // 完成状态
    LEX_SKIP, // 跳过当前字符：这个状态不会保留到字符处理结束
    LEX_CHAR, // 未知字符

    // 标识符和关键字
    LEX_IDENT, // (标识符)
    LEX_DELIMITER, // ` (定界标识符)

    // 字符串字面值
    LEX_STRING, // ' (字符串)
    LEX_STRING_OR_DELIMITER, // " (字符串 or 定界标识符)
    LEX_IDENT_OR_NCHAR, // [nN] (标识符 or Unicode 字符串)
    LEX_IDENT_SEP_START, // 初始状态，下一个 token 是 "."
    LEX_IDENT_START, // 初始状态，下一个 token 是标识符

    // 数值字面值
    LEX_ZERO, // 0
    LEX_ZERO_B, // 0[bB] (二进制字面值)
    LEX_ZERO_X, // 0[xX] (十六进制字面值)
    LEX_NUMBER, // [0-9]+
    LEX_NUMBER_END, // [0-9]+(?!=[0-9])
    LEX_NUMBER_POINT, // [0-9]+\.
    LEX_POINT, // \.

    // 十六进制字面值
    LEX_IDENT_OR_HEX, // [xX] (标识符 or 十六进制字面值)
    LEX_HEX_NUMBER, // [xX]' (十六进制字面值)

    // 二进制字面值
    LEX_IDENT_OR_BIN, // [bB] (标识符 or 二进制字面值)
    LEX_BIN_NUMBER, // [bB]' (二进制字面值)

    // 运算符
    LEX_PLUS, // +
    LEX_CARET, // ^
    LEX_TILDE, // ~
    LEX_PERCENT, // %
    LEX_SUB, // -
    LEX_LT, // <

    LEX_STAR, // *
    LEX_SLASH, // /
    LEX_X21, // !
    LEX_X26, // &

    LEX_GT, // >
    LEX_X58, // :
    LEX_X7C, // |

    // 注释
    LEX_COMMENT, // # 或 --
    LEX_LONG_COMMENT, // /*

    // 其他元素
    LEX_DOLLAR, // $
    LEX_SEMICOLON, // ;
    LEX_AT, // @
};

#endif //SQL_LEX_STATES_H
