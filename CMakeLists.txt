cmake_minimum_required(VERSION 3.5)

project(cstr_example)

set(SRC_LIST src/main.c)

add_executable(${PROJECT_NAME} ${SRC_LIST})
set_property(TARGET ${PROJECT_NAME} PROPERTY C_STANDARD 11)