"""
构造 lexical_one_token 单元测试用例
"""

import os
import re

PROJECT_PATH = os.path.dirname(os.path.dirname(__file__))

PATTERN_1 = re.compile(r"/\*[^*]+\*/")


def main():
    """构造 lexical_one_token 中关键词的单元测试用例"""
    token_name_list = []
    with open(os.path.join(PROJECT_PATH, "parser", "sql_yacc.y"), "r", encoding="utf-8") as file:
        for row in file:
            row = row.strip()
            if not row.startswith("%token"):
                continue
            row = PATTERN_1.sub("", row)
            row = row.replace("%token", "")
            row = row.strip()
            token_name_list.append(row)

    # 构造关键字类型 Token 的单元测试用例
    for token_name in token_name_list:
        if not token_name.startswith("KEYWORD_"):
            continue
        keyword = token_name[8:]

        print(f"TEST(lexical_one_token_keyword, keyword_{keyword.lower()}) {{")
        print(f"    EXPECT_EQ({token_name}, parse_one_token(std::string(\"{keyword.upper()}\")));")
        print(f"    EXPECT_EQ({token_name}, parse_one_token(std::string(\"{keyword.lower()}\")));")
        print("}")
        print()

if __name__ == "__main__":
    main()
