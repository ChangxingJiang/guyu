CMAKE_MINIMUM_REQUIRED(VERSION 3.28)
PROJECT(guyu)

set(CMAKE_CXX_STANDARD 17)

# 增加子目录准备使用 gtest 自带的 cmakelists.txt 去编译 gtest
add_subdirectory(${PROJECT_SOURCE_DIR}/lib)
# 指定 gtest 的头文件目录
include_directories(googletest/include googletest)
# 指定 gmock 的头文件目录
#include_directories(${PROJECT_SOURCE_DIR}/lib/googlemock/include ${PROJECT_SOURCE_DIR}/lib/googlemock)

add_executable(test
        test/main.cpp
        test/lexical_one_token_keyword.cpp
        test/lexical_base.cpp
        parser/sql_lex.cpp
        parser/sql_yacc.tab.h
        parser/lex_start_map.cpp
        include/string_utils.cpp
        lexical/lex_keyword_map.cpp
)
target_link_libraries(test gtest gtest_main)

include_directories(
        ${PROJECT_SOURCE_DIR}
)

add_executable(guyu
        parser/main.cpp
        parser/sql_lex.cpp
        parser/sql_yacc.tab.h
        parser/lex_start_map.cpp
        include/string_utils.cpp
        lexical/lex_keyword_map.cpp
)
target_link_libraries(guyu gtest gtest_main)
