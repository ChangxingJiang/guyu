//
// Created by Changxing on 2025/2/16.
//

#include "lex_yystype.h"
#include "sql_lex.h"
#include "sql_yacc.tab.h"

char *yytext;

void Lex_input_stream::reset(const char *buffer, size_t length) {
    yylineno = 1;
    yylval = nullptr;

    m_buf = buffer;
}


int yylex(YYSTYPE *lvalp) {
    return SYSTEM_END_OF_INPUT;
}
