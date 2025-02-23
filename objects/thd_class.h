//
// Created by Changxing on 2025/2/22.
//

#ifndef THD_CLASS_H
#define THD_CLASS_H

#include <cstdint>
#include <parser/lex_start_map.h>
#include "lexical/lex_keyword_map.h"

class THD {
public:
    THD() = default;

    [[nodiscard]] const std::array<lex_states, 256> &get_lex_start_map() const {
        return lex_start_map;
    }

    [[nodiscard]] const std::array<uint8_t, 256> &get_lex_ident_map() const {
        return lex_ident_map;
    }

    [[nodiscard]] const std::unordered_map<std::string, int> &get_lex_keyword_map() const {
        return lex_keyword_map;
    }

private:
    /** 词法解析：初始状态 */
    const std::array<lex_states, 256> lex_start_map = init_lex_start_map();
    const std::array<uint8_t, 256> lex_ident_map = init_lex_ident_map(lex_start_map);
    const std::unordered_map<std::string, int> lex_keyword_map = init_lex_keyword_map();
};

#endif //THD_CLASS_H
