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
    arr[0x04] = LEX_ERROR; // EOT (end of transmission) 传输结束
    arr[0x05] = LEX_ERROR; // ENQ (enquiry) 请求
    arr[0x06] = LEX_ERROR; // ACK (acknowledge) 收到通知
    arr[0x07] = LEX_ERROR; // BEL (bell) 响铃
    arr[0x08] = LEX_ERROR; // BS (backspace) 退格键
    arr[0x09] = LEX_SKIP; // HT (horizontal tab) 水平制表符
    arr[0x0A] = LEX_SKIP; // LF (NL line feed, new line) 换行键
    arr[0x0B] = LEX_ERROR; // VT (vertical tab) 垂直制表符
    arr[0x0C] = LEX_ERROR; // FF (NP form feed, new page) 换页符
    arr[0x0D] = LEX_ERROR; // CR (carriage return) 回车键
    arr[0x0E] = LEX_ERROR; // SO (shift out) 不用切换
    arr[0x0F] = LEX_ERROR; // SI (shift in) 切换
    arr[0x10] = LEX_ERROR; // DLE (data link escape) 数据链路转义
    arr[0x11] = LEX_ERROR; // DC1 (device control 1) 设备控制1
    arr[0x12] = LEX_ERROR; // DC2 (device control 2) 设备控制2
    arr[0x13] = LEX_ERROR; // DC3 (device control 3) 设备控制3
    arr[0x14] = LEX_ERROR; // DC4 (device control 4) 设备控制4
    arr[0x15] = LEX_ERROR; // NAK (negative acknowledge) 拒绝接受
    arr[0x16] = LEX_ERROR; // SYN (synchronous idle) 同步空闲
    arr[0x17] = LEX_ERROR; // ETB (end of trans. block) 结束传输块
    arr[0x18] = LEX_ERROR; // CAN (cancel) 取消
    arr[0x19] = LEX_ERROR; // EM (end of medium) 媒介结束
    arr[0x1A] = LEX_ERROR; // SUB (substitute) 代替
    arr[0x1B] = LEX_ERROR; // ESC (escape) 换码
    arr[0x1C] = LEX_ERROR; // FS (file separator) 文件分割符
    arr[0x1D] = LEX_ERROR; // GS (group separator) 分组符
    arr[0x1E] = LEX_ERROR; // RS (record separator) 记录分割符
    arr[0x1F] = LEX_ERROR; // US (unit separator) 单元分隔符
    arr[0x20] = LEX_SKIP; // ' ' (space) 空格
    arr[0x21] = LEX_BANG; // '!' 叹号
    arr[0x22] = LEX_STRING_OR_DELIMITER; // '"' 双引号
    arr[0x23] = LEX_COMMENT; // '#' 井号

    arr[0x25] = LEX_PERCENT; // '%' 百分号
    arr[0x26] = LEX_AMP; // '&' 和号
    arr[0x27] = LEX_STRING; // '\'' 单引号
    arr[0x28] = LEX_LPAREN; // '(' 左括号
    arr[0x29] = LEX_RPAREN; // ')' 右括号
    arr[0x2A] = LEX_STAR; // '*' 星号
    arr[0x2B] = LEX_PLUS; // '+' 加号
    arr[0x2C] = LEX_COMMA; // ',' 逗号
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
    arr[0x3B] = LEX_SEMICOLON; // ';' 分号
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
    arr[0x5B] = LEX_ERROR;  // '[' 左中括号
    arr[0x5C] = LEX_ERROR; // '\' 反斜杠
    arr[0x5D] = LEX_ERROR; // ']' 右中括号
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
    arr[0x7B] = LEX_LBRACE; // '{' 左大括号
    arr[0x7C] = LEX_BAR; // '|'
    arr[0x7D] = LEX_RBRACE; // '}' 右大括号
    arr[0x7E] = LEX_TILDE; // '~'
    arr[0x7F] = LEX_ERROR; // DEL (delete) 删除
    arr[0x80] = LEX_ERROR; // 多字节字符的后续位置
    arr[0x81] = LEX_ERROR; // 多字节字符的后续位置
    arr[0x82] = LEX_ERROR; // 多字节字符的后续位置
    arr[0x83] = LEX_ERROR; // 多字节字符的后续位置
    arr[0x84] = LEX_ERROR; // 多字节字符的后续位置
    arr[0x85] = LEX_ERROR; // 多字节字符的后续位置
    arr[0x86] = LEX_ERROR; // 多字节字符的后续位置
    arr[0x87] = LEX_ERROR; // 多字节字符的后续位置
    arr[0x88] = LEX_ERROR; // 多字节字符的后续位置
    arr[0x89] = LEX_ERROR; // 多字节字符的后续位置
    arr[0x8A] = LEX_ERROR; // 多字节字符的后续位置
    arr[0x8B] = LEX_ERROR; // 多字节字符的后续位置
    arr[0x8C] = LEX_ERROR; // 多字节字符的后续位置
    arr[0x8D] = LEX_ERROR; // 多字节字符的后续位置
    arr[0x8E] = LEX_ERROR; // 多字节字符的后续位置
    arr[0x8F] = LEX_ERROR; // 多字节字符的后续位置
    arr[0x90] = LEX_ERROR; // 多字节字符的后续位置
    arr[0x91] = LEX_ERROR; // 多字节字符的后续位置
    arr[0x92] = LEX_ERROR; // 多字节字符的后续位置
    arr[0x93] = LEX_ERROR; // 多字节字符的后续位置
    arr[0x94] = LEX_ERROR; // 多字节字符的后续位置
    arr[0x95] = LEX_ERROR; // 多字节字符的后续位置
    arr[0x96] = LEX_ERROR; // 多字节字符的后续位置
    arr[0x97] = LEX_ERROR; // 多字节字符的后续位置
    arr[0x98] = LEX_ERROR; // 多字节字符的后续位置
    arr[0x99] = LEX_ERROR; // 多字节字符的后续位置
    arr[0x9A] = LEX_ERROR; // 多字节字符的后续位置
    arr[0x9B] = LEX_ERROR; // 多字节字符的后续位置
    arr[0x9C] = LEX_ERROR; // 多字节字符的后续位置
    arr[0x9D] = LEX_ERROR; // 多字节字符的后续位置
    arr[0x9E] = LEX_ERROR; // 多字节字符的后续位置
    arr[0x9F] = LEX_ERROR; // 多字节字符的后续位置
    arr[0xA0] = LEX_ERROR; // 多字节字符的后续位置
    arr[0xA1] = LEX_ERROR; // 多字节字符的后续位置
    arr[0xA2] = LEX_ERROR; // 多字节字符的后续位置
    arr[0xA3] = LEX_ERROR; // 多字节字符的后续位置
    arr[0xA4] = LEX_ERROR; // 多字节字符的后续位置
    arr[0xA5] = LEX_ERROR; // 多字节字符的后续位置
    arr[0xA6] = LEX_ERROR; // 多字节字符的后续位置
    arr[0xA7] = LEX_ERROR; // 多字节字符的后续位置
    arr[0xA8] = LEX_ERROR; // 多字节字符的后续位置
    arr[0xA9] = LEX_ERROR; // 多字节字符的后续位置
    arr[0xAA] = LEX_ERROR; // 多字节字符的后续位置
    arr[0xAB] = LEX_ERROR; // 多字节字符的后续位置
    arr[0xAC] = LEX_ERROR; // 多字节字符的后续位置
    arr[0xAD] = LEX_ERROR; // 多字节字符的后续位置
    arr[0xAE] = LEX_ERROR; // 多字节字符的后续位置
    arr[0xAF] = LEX_ERROR; // 多字节字符的后续位置
    arr[0xB0] = LEX_ERROR; // 多字节字符的后续位置
    arr[0xB1] = LEX_ERROR; // 多字节字符的后续位置
    arr[0xB2] = LEX_ERROR; // 多字节字符的后续位置
    arr[0xB3] = LEX_ERROR; // 多字节字符的后续位置
    arr[0xB4] = LEX_ERROR; // 多字节字符的后续位置
    arr[0xB5] = LEX_ERROR; // 多字节字符的后续位置
    arr[0xB6] = LEX_ERROR; // 多字节字符的后续位置
    arr[0xB7] = LEX_ERROR; // 多字节字符的后续位置
    arr[0xB8] = LEX_ERROR; // 多字节字符的后续位置
    arr[0xB9] = LEX_ERROR; // 多字节字符的后续位置
    arr[0xBA] = LEX_ERROR; // 多字节字符的后续位置
    arr[0xBB] = LEX_ERROR; // 多字节字符的后续位置
    arr[0xBC] = LEX_ERROR; // 多字节字符的后续位置
    arr[0xBD] = LEX_ERROR; // 多字节字符的后续位置
    arr[0xBE] = LEX_ERROR; // 多字节字符的后续位置
    arr[0xBF] = LEX_ERROR; // 多字节字符的后续位置
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
