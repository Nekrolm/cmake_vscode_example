
set(SOURCES quick.c)

add_executable(quick_sort_example ${SOURCES})
set_target_properties(quick_sort_example 
            PROPERTIES 
            C_STANDARD 11)
