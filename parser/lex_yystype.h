//
// Created by Changxing on 2025/2/18.
//

#ifndef LEX_YYSTYPE_H
#define LEX_YYSTYPE_H

#include "include/lex_type/lex_string.h"

/**
 * 词法解析器的类型
 */
union Lexer_yystype {
    LEX_STRING lex_str;
};

/**
 * 语法解析器的类型
 */
union Parser_yystype {
    Lexer_yystype lexer;

    int num{}; // 临时
};

typedef Parser_yystype YYSTYPE;

#endif //LEX_YYSTYPE_H
