CMAKE_MINIMUM_REQUIRED(VERSION 3.28)
PROJECT(guyu)

set(CMAKE_CXX_STANDARD 17)

include_directories(
        ${PROJECT_SOURCE_DIR}
)

add_executable(parser parser/sql_lex.cpp
        parser/sql_yacc.tab.h
        parser/lex_start_map.cpp
        include/string_utils.cpp)
