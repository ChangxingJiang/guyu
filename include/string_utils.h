//
// Created by Changxing on 2025/2/22.
//

#ifndef STRING_UTILS_H
#define STRING_UTILS_H

#include <cstdint>
#include <string>
#include "include/int_types.h"

/** 根据首字节，判断字符的长度 */
uint8_t get_utf8_char_length(uchar byte);

/** 判断当前字节是否是一个多字节字符的一部分（即不是字符的起始字节） */
bool is_part_of_multi_byte_char(uchar byte);

/** 将字符串转换为小写 */
void to_lowercase(std::string &str);

#endif //STRING_UTILS_H
