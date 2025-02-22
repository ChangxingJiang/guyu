/*
 * 适配 Bison 词法解析器的
 */

#ifndef SQL_LEX_H
#define SQL_LEX_H

#include "lex_yystype.h"
#include "sql_lex_states.h"
#include "include/int_types.h"

/**
 * 词法解析的输入流对象
 */
class Lex_input_stream {
public:
    Lex_input_stream(): yylval(nullptr), next_state(LEX_START) {
    }

    /* 当前行号 */
    unsigned int yylineno = 1;

    /* 上一个 Token 的值 */
    Lexer_yystype *yylval;

    /* 词法解析器当前状态 */
    lex_states next_state;

    /** 初始化输入流 */
    bool init(char *buff, int length);

    /** 重置输入流 */
    void reset(char *buffer, int length);

    /** 开始一个新的 token */
    void start_token() {
        m_tok_start = m_ptr;
        m_tok_end = m_ptr;
    }

    /** 获取当前 Token 的长度 */
    [[nodiscard]] uint yy_length() const {
        return static_cast<uint>(m_ptr - m_tok_start - 1);
    }

    /** 获取当前字符，但不移动指针 */
    [[nodiscard]] char yy_peek() const {
        return m_ptr[0];
    }

    /** 获取当前字符，并将指针移动到下一个字符 */
    char yy_get() {
        return *m_ptr++;
    }

    /** 将指针移动到下一个字符 */
    void yy_skip() {
        m_ptr++;
    }

    /** 返回指向输入流中当前 Token 开始位置的指针 */
    [[nodiscard]] const char *get_tok_start() const {
        return m_tok_start;
    }

private:
    /* 指向输入流开始位置的指针 */
    const char *m_buf = nullptr;

    /* 输入流的长度 */
    int m_buf_length = 0;

    /* 指向输入流中的当前位置的指针 */
    char *m_ptr = nullptr;

    /* 指向输入流中当前 token 开始位置的指针 */
    char *m_tok_start = nullptr;

    /* 指向输入流中当前 token 结束位置的指针 */
    char *m_tok_end = nullptr;
};

#endif //SQL_LEX_H
