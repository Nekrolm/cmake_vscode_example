
set(SRC algo.c)

add_library(algo_static STATIC ${SRC})
target_include_directories(algo_static PUBLIC ./include)

add_library(algo_dynamic SHARED ${SRC})
target_include_directories(algo_dynamic PUBLIC ./include)
target_link_directories(algo_dynamic PUBLIC ./)



