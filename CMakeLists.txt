CMAKE_MINIMUM_REQUIRED(VERSION 3.28)
PROJECT(guyu)

set(CMAKE_CXX_STANDARD 17)

add_executable(parser parser/sql_lex.cpp)
