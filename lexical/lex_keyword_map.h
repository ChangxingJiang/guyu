//
// Created by Changxing on 2025/2/23.
//

#ifndef LEX_KEYWORD_H
#define LEX_KEYWORD_H

#include <unordered_map>
#include <string>

#include "parser/sql_yacc.tab.h"

std::unordered_map<std::string, int> init_lex_keyword_map();

#endif //LEX_KEYWORD_H
