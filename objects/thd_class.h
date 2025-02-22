//
// Created by Changxing on 2025/2/22.
//

#ifndef THD_CLASS_H
#define THD_CLASS_H

#include <cstdint>

class THD {
public:
    THD() = default;

    [[nodiscard]] std::array<lex_states, 256> get_lex_start_map() const {
        return lex_start_map;
    }

    [[nodiscard]] std::array<uint8_t, 256> get_lex_ident_map() const {
        return lex_ident_map;
    }

private:
    /** 词法解析：初始状态 */
    const std::array<lex_states, 256> lex_start_map = init_lex_start_map();
    const std::array<uint8_t, 256> lex_ident_map = init_lex_ident_map(lex_start_map);
};

#endif //THD_CLASS_H
