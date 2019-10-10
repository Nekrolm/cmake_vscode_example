all: test_static test_dynamic

clean:
	rm test_dynamic test_static

.PHONY: all clean

test_static: algo_test.c
	gcc -o $@ $^ -I ../algo_libs/include -L../algo_libs -lalgo_static


test_dynamic: algo_test.c
	gcc -o $@ $^ -I ../algo_libs/include -L../algo_libs -Wl,-rpath=../algo_libs -lalgo_dynamic