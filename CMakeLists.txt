cmake_minimum_required(VERSION 3.5)

project(cstr_example)

set(SRC_LIST src/main.c)

add_executable(${PROJECT_NAME} ${SRC_LIST})

set_target_properties(${PROJECT_NAME} 
            PROPERTIES 
            C_STANDARD 11)

target_include_directories(${PROJECT_NAME} PRIVATE include)