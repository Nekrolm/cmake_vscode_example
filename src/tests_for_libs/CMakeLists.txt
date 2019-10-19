
add_executable(algo_test_static algo_test.c)
target_link_libraries(algo_test_static
                      PRIVATE algo_static) 


add_executable(algo_test_dynamic algo_test.c)
target_link_libraries(algo_test_dynamic
                      PRIVATE algo_dynamic) 


add_executable(algo_test_plugin plugin_test.c)
target_link_libraries(algo_test_plugin
                      PRIVATE dl)
                       

