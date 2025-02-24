#include "string_utils.h"

/**
* 根据首字节，判断字符的长度
 *
 * 对于 UTF-8 编码，可以通过检查首字节的模式来确定字符的长度：
 * 1. 如果首字节以0开头，则它是一个ASCII字符（长度为1）。
 * 2. 如果首字节以110开头，则它是一个双字节字符的开始（长度为2）。
 * 3. 如果首字节以1110开头，则它是一个三字节字符的开始（长度为3）。
 * 4. 如果首字节以11110开头，则它是一个四字节字符的开始（长度为4）。
 * 5. 如果首字节以10开头，则它是多字节字符的后续部分，不属于一个新的字符的开始。
 */
uint8_t get_utf8_char_length(const uchar byte) {
    if ((byte & 0x80) == 0) return 1; // ASCII
    if ((byte & 0xE0) == 0xC0) return 2; // 2-byte sequence
    if ((byte & 0xF0) == 0xE0) return 3; // 3-byte sequence
    if ((byte & 0xF8) == 0xF0) return 4; // 4-byte sequence
    return 0; // Invalid byte
}

/**
 * 判断当前字节是否是一个多字节字符的一部分（即不是字符的起始字节）
 */
bool is_part_of_multi_byte_char(const uchar byte) {
    // Check if it's not a start of a new character
    return (byte & 0xC0) == 0x80;
}

void to_lowercase(std::string &str) {
    for (char &c: str) {
        c = static_cast<char>(std::tolower(c)); // 转换为小写
    }
}
