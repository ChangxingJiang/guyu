//
// Created by Changxing on 2025/2/19.
//

#ifndef LEX_START_MAP_H
#define LEX_START_MAP_H

#include <array>
#include "sql_lex_states.h"

std::array<lex_states, 256> init_lex_start_map();

#endif //LEX_START_MAP_H
