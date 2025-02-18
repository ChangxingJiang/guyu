//
// Created by Changxing on 2025/2/16.
//

#include "lex_yystype.h"
#include "sql_lex.h"
#include "sql_yacc.tab.h"

char *yytext;

int yylex(YYSTYPE *lvalp) {
    if (yy_cnt == 0) {
        yy_cnt++;
        yytext = "3";
        printf(yytext);
        return NUM;
    }
    if (yy_cnt == 1) {
        printf("+");
        yy_cnt++;
        return ADD;
    }
    if (yy_cnt == 2) {
        yy_cnt++;
        yytext = "5";
        printf(yytext);
        return NUM;
    }
    if (yy_cnt == 3) {
        yy_cnt++;
        return BR;
    }
    return EOF;
}