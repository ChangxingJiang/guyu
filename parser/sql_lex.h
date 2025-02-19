/*
 * 适配 Bison 词法解析器的
 */

#ifndef SQL_LEX_H
#define SQL_LEX_H

#include "lex_yystype.h"
#include "sql_lex_states.h"

/**
 * 词法解析的输入流对象
 */
class Lex_input_stream {
public:
    Lex_input_stream(): yylval(nullptr), next_state(LEX_START) {
    }

    bool init(char *buff, int length);

    void reset(char *buffer, int length);

    [[nodiscard]] char yyPeek() const {
        return m_ptr[0];
    }

    char yyGet() {
        return *m_ptr++;
    }

    void yySkip() {
        m_ptr++;
    }

    /* 当前行号 */
    unsigned int yylineno = 1;

    /* 上一个 Token 的值 */
    Lexer_yystype *yylval;

    /* 词法解析器当前状态 */
    lex_states next_state;

private:
    /* 指向输入流开始位置的指针 */
    const char *m_buf = nullptr;

    /* 输入流的长度 */
    int m_buf_length = 0;

    /* 指向输入流中的当前位置的指针 */
    char *m_ptr = nullptr;

    /* 指向输入流中当前 token 开始位置的指针 */
    const char *m_tok_start = nullptr;

    /* 指向输入流中当前 token 结束位置的指针 */
    const char *m_tok_end = nullptr;
};

#endif //SQL_LEX_H
