all: libalgo_static.a libalgo_dynamic.so

libalgo_static.a: algo.o
	ar rcs $@ $^

libalgo_dynamic.so: algo.o
	gcc -shared -o $@ $^

algo.o: algo.c include/algo.h
	gcc -fPIC -o $@ -c $< -Iinclude

clean: 
	rm *.a *.so *.o

.PHONY: clean all