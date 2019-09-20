cmake_minimum_required(VERSION 3.13)

project(example)

set(SRC_LIST 
    src/main.c
    src/hello.c)

add_executable(${PROJECT_NAME} ${SRC_LIST})

set_target_properties(${PROJECT_NAME} 
            PROPERTIES 
            C_STANDARD 11)

target_include_directories(${PROJECT_NAME} PRIVATE include)


if (CMAKE_BUILD_TYPE MATCHES Debug)
    if(NOT MSVC)
        message("Enable sanitizers")
        set(SANITIZER_FLAGS -fsanitize=address -fsanitize=undefined)
        target_compile_options(${PROJECT_NAME} PRIVATE ${SANITIZER_FLAGS})
        target_link_options(${PROJECT_NAME} PRIVATE ${SANITIZER_FLAGS})    
    endif()
endif()