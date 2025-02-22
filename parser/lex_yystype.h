//
// Created by Changxing on 2025/2/18.
//

#ifndef LEX_YYSTYPE_H
#define LEX_YYSTYPE_H

#include <string>

/**
 * 词法解析器的类型
 */
union Lexer_yystype {
    std::string lex_str;

    Lexer_yystype() {
    }

    ~Lexer_yystype() {
    }

    void init_lex_str(const std::string &str) {
        new(&lex_str) std::string(str);
    }
};

/**
 * 语法解析器的类型
 */
union Parser_yystype {
    Parser_yystype() {
    }

    Lexer_yystype lexer;

    int num{}; // 临时
};

typedef Parser_yystype YYSTYPE;

#endif //LEX_YYSTYPE_H
