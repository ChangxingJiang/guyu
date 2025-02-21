#include "lex_start_map.h"

#include <locale>

std::array<lex_states, 256> init_lex_start_map() {
    std::array<lex_states, 256> arr{LEX_IDENT};

    // TODO 待考虑支持多字节字符

    for (int ch = 0; ch < 256; ch++) {
        if (std::isalpha(ch)) {
            arr[ch] = LEX_IDENT;
        } else if (ch == '0') {
            arr[ch] = LEX_ZERO;
        } else if (std::isdigit(ch)) {
            arr[ch] = LEX_NUMBER;
        } else if (ch == ' ' || ch == '\n') {
            arr[ch] = LEX_SKIP;
        } else {
            arr[ch] = LEX_CHAR;
        }
    }

    arr[u'+'] = LEX_PLUS;
    arr[u'^'] = LEX_CARET;
    arr[u'~'] = LEX_TILDE;
    arr[u'%'] = LEX_PERCENT;
    arr[u'-'] = LEX_SUB;
    arr[u'<'] = LEX_LT;

    arr[u'*'] = LEX_STAR;
    arr[u'/'] = LEX_SLASH;
    arr[u'_'] = LEX_IDENT;
    arr[u'$'] = LEX_IDENT;
    arr[u'\''] = LEX_STRING;
    arr[u'.'] = LEX_POINT;
    arr[u'!'] = LEX_X21;
    arr[u'&'] = LEX_X26;
    arr[u'>'] = LEX_GT;
    arr[u':'] = LEX_X58;
    arr[u'|'] = LEX_X7C;
    arr[u'#'] = LEX_COMMENT;

    arr[u';'] = LEX_SEMICOLON;
    arr[0] = LEX_EOF;
    arr[u'@'] = LEX_AT;
    arr[u'`'] = LEX_DELIMITER;
    arr[u'"'] = LEX_STRING_OR_DELIMITER;

    /* Special handling of hex and binary strings */
    arr[u'x'] = arr[u'X'] = LEX_IDENT_OR_HEX;
    arr[u'b'] = arr[u'B'] = LEX_IDENT_OR_BIN;
    arr[u'n'] = arr[u'N'] = LEX_IDENT_OR_NCHAR;

    /* Special handling of '$' for dollar quoted strings */
    arr[u'$'] = LEX_DOLLAR;

    return arr;
}
