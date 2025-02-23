#include "lex_start_map.h"

#include <iostream>
#include <locale>

/**
 * 初始化词法解析自动机初始状态转移规则的哈希表，即在初始状态下，遇到每个字符后要转移到什么状态
 *
 * @return 初始状态转移规则的哈希表
 */
std::array<lex_states, 256> init_lex_start_map() {
    std::array<lex_states, 256> arr{LEX_ERROR};

    arr[0x00] = LEX_EOF; // NUL (null) 空字符  TODO 暂未处理
    arr[0x01] = LEX_ERROR; // SOH (start of headline) 标题开始
    arr[0x02] = LEX_ERROR; // STX (start of text) 正文开始
    arr[0x03] = LEX_ERROR; // ETX (end of text) 正文结束

    arr[0x0A] = LEX_SKIP; // LF (NL line feed, new line) 换行键

    arr[0x20] = LEX_SKIP; // ' ' (space) 空格
    arr[0x21] = LEX_BANG; // '!' 叹号
    arr[0x22] = LEX_STRING_OR_DELIMITER; // '"' 双引号

    arr[0x25] = LEX_PERCENT; // '%' 百分号
    arr[0x26] = LEX_AMP; // '&' 和号
    arr[0x27] = LEX_STRING; // '\'' 单引号

    arr[0x2A] = LEX_STAR; // '*' 星号
    arr[0x2B] = LEX_PLUS; // '+' 加号

    arr[0x2D] = LEX_SUB; // '-' 减号
    arr[0x2E] = LEX_DOT; // '.' 句号
    arr[0x2F] = LEX_SLASH; // '/' 斜杠
    arr[0x30] = LEX_ZERO; // '0'
    arr[0x31] = LEX_NUMBER; // '1'
    arr[0x32] = LEX_NUMBER; // '2'
    arr[0x33] = LEX_NUMBER; // '3'
    arr[0x34] = LEX_NUMBER; // '4'
    arr[0x35] = LEX_NUMBER; // '5'
    arr[0x36] = LEX_NUMBER; // '6'
    arr[0x37] = LEX_NUMBER; // '7'
    arr[0x38] = LEX_NUMBER; // '8'
    arr[0x39] = LEX_NUMBER; // '9'
    arr[0x3A] = LEX_COLON; // ':' 冒号

    arr[0x3C] = LEX_LT; // '<' 小于
    arr[0x3D] = LEX_EQ; // '=' 等号
    arr[0x3E] = LEX_GT; // '>' 大于

    arr[0x41] = LEX_IDENT; // 'A'
    arr[0x42] = LEX_IDENT_OR_BIN; // 'B'
    arr[0x43] = LEX_IDENT; // 'C'
    arr[0x44] = LEX_IDENT; // 'D'
    arr[0x45] = LEX_IDENT; // 'E'
    arr[0x46] = LEX_IDENT; // 'F'
    arr[0x47] = LEX_IDENT; // 'G'
    arr[0x48] = LEX_IDENT; // 'H'
    arr[0x49] = LEX_IDENT; // 'I'
    arr[0x4A] = LEX_IDENT; // 'J'
    arr[0x4B] = LEX_IDENT; // 'K'
    arr[0x4C] = LEX_IDENT; // 'L'
    arr[0x4D] = LEX_IDENT; // 'M'
    arr[0x4E] = LEX_IDENT_OR_NCHAR; // 'N'
    arr[0x4F] = LEX_IDENT; // 'O'
    arr[0x50] = LEX_IDENT; // 'P'
    arr[0x51] = LEX_IDENT; // 'Q'
    arr[0x52] = LEX_IDENT; // 'R'
    arr[0x53] = LEX_IDENT; // 'S'
    arr[0x54] = LEX_IDENT; // 'T'
    arr[0x55] = LEX_IDENT; // 'U'
    arr[0x56] = LEX_IDENT; // 'V'
    arr[0x57] = LEX_IDENT; // 'W'
    arr[0x58] = LEX_IDENT_OR_HEX; // 'X'
    arr[0x59] = LEX_IDENT; // 'Y'
    arr[0x5A] = LEX_IDENT; // 'Z'

    arr[0x5E] = LEX_CARET; // '^' 脱字符
    arr[0x5F] = LEX_IDENT; // '_' 下划线

    arr[0x61] = LEX_IDENT; // 'a'
    arr[0x62] = LEX_IDENT_OR_BIN; // 'b'
    arr[0x63] = LEX_IDENT; // 'c'
    arr[0x64] = LEX_IDENT; // 'd'
    arr[0x65] = LEX_IDENT; // 'e'
    arr[0x66] = LEX_IDENT; // 'f'
    arr[0x67] = LEX_IDENT; // 'g'
    arr[0x68] = LEX_IDENT; // 'h'
    arr[0x69] = LEX_IDENT; // 'i'
    arr[0x6A] = LEX_IDENT; // 'j'
    arr[0x6B] = LEX_IDENT; // 'k'
    arr[0x6C] = LEX_IDENT; // 'l'
    arr[0x6D] = LEX_IDENT; // 'm'
    arr[0x6E] = LEX_IDENT_OR_NCHAR; // 'n'
    arr[0x6F] = LEX_IDENT; // 'o'
    arr[0x70] = LEX_IDENT; // 'p'
    arr[0x71] = LEX_IDENT; // 'q'
    arr[0x72] = LEX_IDENT; // 'r'
    arr[0x73] = LEX_IDENT; // 's'
    arr[0x74] = LEX_IDENT; // 't'
    arr[0x75] = LEX_IDENT; // 'u'
    arr[0x76] = LEX_IDENT; // 'v'
    arr[0x77] = LEX_IDENT; // 'w'
    arr[0x78] = LEX_IDENT_OR_HEX; // 'x'
    arr[0x79] = LEX_IDENT; // 'y'
    arr[0x7A] = LEX_IDENT; // 'z'

    arr[0x7C] = LEX_BAR; // '|'

    arr[0x7E] = LEX_TILDE; // '~'
    arr[0x7F] = LEX_ERROR; // DEL (delete) 删除

    arr[0xC0] = LEX_IDENT; // 110 开头，双字节字符的开始位置
    arr[0xC1] = LEX_IDENT; // 110 开头，双字节字符的开始位置
    arr[0xC2] = LEX_IDENT; // 110 开头，双字节字符的开始位置
    arr[0xC3] = LEX_IDENT; // 110 开头，双字节字符的开始位置
    arr[0xC4] = LEX_IDENT; // 110 开头，双字节字符的开始位置
    arr[0xC5] = LEX_IDENT; // 110 开头，双字节字符的开始位置
    arr[0xC6] = LEX_IDENT; // 110 开头，双字节字符的开始位置
    arr[0xC7] = LEX_IDENT; // 110 开头，双字节字符的开始位置
    arr[0xC8] = LEX_IDENT; // 110 开头，双字节字符的开始位置
    arr[0xC9] = LEX_IDENT; // 110 开头，双字节字符的开始位置
    arr[0xCA] = LEX_IDENT; // 110 开头，双字节字符的开始位置
    arr[0xCB] = LEX_IDENT; // 110 开头，双字节字符的开始位置
    arr[0xCC] = LEX_IDENT; // 110 开头，双字节字符的开始位置
    arr[0xCD] = LEX_IDENT; // 110 开头，双字节字符的开始位置
    arr[0xCE] = LEX_IDENT; // 110 开头，双字节字符的开始位置
    arr[0xCF] = LEX_IDENT; // 110 开头，双字节字符的开始位置
    arr[0xD0] = LEX_IDENT; // 110 开头，双字节字符的开始位置
    arr[0xD1] = LEX_IDENT; // 110 开头，双字节字符的开始位置
    arr[0xD2] = LEX_IDENT; // 110 开头，双字节字符的开始位置
    arr[0xD3] = LEX_IDENT; // 110 开头，双字节字符的开始位置
    arr[0xD4] = LEX_IDENT; // 110 开头，双字节字符的开始位置
    arr[0xD5] = LEX_IDENT; // 110 开头，双字节字符的开始位置
    arr[0xD6] = LEX_IDENT; // 110 开头，双字节字符的开始位置
    arr[0xD7] = LEX_IDENT; // 110 开头，双字节字符的开始位置
    arr[0xD8] = LEX_IDENT; // 110 开头，双字节字符的开始位置
    arr[0xD9] = LEX_IDENT; // 110 开头，双字节字符的开始位置
    arr[0xDA] = LEX_IDENT; // 110 开头，双字节字符的开始位置
    arr[0xDB] = LEX_IDENT; // 110 开头，双字节字符的开始位置
    arr[0xDC] = LEX_IDENT; // 110 开头，双字节字符的开始位置
    arr[0xDD] = LEX_IDENT; // 110 开头，双字节字符的开始位置
    arr[0xDE] = LEX_IDENT; // 110 开头，双字节字符的开始位置
    arr[0xDF] = LEX_IDENT; // 110 开头，双字节字符的开始位置
    arr[0xE0] = LEX_IDENT; // 1110 开头，三字节字符的开始位置
    arr[0xE1] = LEX_IDENT; // 1110 开头，三字节字符的开始位置
    arr[0xE2] = LEX_IDENT; // 1110 开头，三字节字符的开始位置
    arr[0xE3] = LEX_IDENT; // 1110 开头，三字节字符的开始位置
    arr[0xE4] = LEX_IDENT; // 1110 开头，三字节字符的开始位置
    arr[0xE5] = LEX_IDENT; // 1110 开头，三字节字符的开始位置
    arr[0xE6] = LEX_IDENT; // 1110 开头，三字节字符的开始位置
    arr[0xE7] = LEX_IDENT; // 1110 开头，三字节字符的开始位置
    arr[0xE8] = LEX_IDENT; // 1110 开头，三字节字符的开始位置
    arr[0xE9] = LEX_IDENT; // 1110 开头，三字节字符的开始位置
    arr[0xEA] = LEX_IDENT; // 1110 开头，三字节字符的开始位置
    arr[0xEB] = LEX_IDENT; // 1110 开头，三字节字符的开始位置
    arr[0xEC] = LEX_IDENT; // 1110 开头，三字节字符的开始位置
    arr[0xED] = LEX_IDENT; // 1110 开头，三字节字符的开始位置
    arr[0xEE] = LEX_IDENT; // 1110 开头，三字节字符的开始位置
    arr[0xEF] = LEX_IDENT; // 1110 开头，三字节字符的开始位置
    arr[0xF0] = LEX_IDENT; // 11110 开头，四字节字符的开始位置
    arr[0xF1] = LEX_IDENT; // 11110 开头，四字节字符的开始位置
    arr[0xF2] = LEX_IDENT; // 11110 开头，四字节字符的开始位置
    arr[0xF3] = LEX_IDENT; // 11110 开头，四字节字符的开始位置
    arr[0xF4] = LEX_IDENT; // 11110 开头，四字节字符的开始位置
    arr[0xF5] = LEX_IDENT; // 11110 开头，四字节字符的开始位置
    arr[0xF6] = LEX_IDENT; // 11110 开头，四字节字符的开始位置
    arr[0xF7] = LEX_IDENT; // 11110 开头，四字节字符的开始位置

    // 字面值
    arr[u'#'] = LEX_COMMENT;

    arr[u';'] = LEX_SEMICOLON;
    arr[u'@'] = LEX_AT;
    arr[u'`'] = LEX_DELIMITER;

    /* Special handling of '$' for dollar quoted strings */
    arr[u'$'] = LEX_DOLLAR;

    return arr;
}

std::array<uint8_t, 256> init_lex_ident_map(const std::array<lex_states, 256> &lex_start_map) {
    std::array<uint8_t, 256> ident_map{};

    for (unsigned i = 0; i < 256; i++) {
        ident_map[i] = static_cast<uint8_t>(lex_start_map[i] == LEX_IDENT ||
                                            lex_start_map[i] == LEX_IDENT_OR_BIN ||
                                            lex_start_map[i] == LEX_IDENT_OR_HEX ||
                                            lex_start_map[i] == LEX_IDENT_OR_NCHAR ||
                                            lex_start_map[i] == LEX_NUMBER);
        // std::cout << "[lex_ident_map] i = " << i << ", ident_map[i] = " << int(ident_map[i]) << std::endl;
    }

    return ident_map;
}
