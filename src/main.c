#include <malloc.h>
#include <stdio.h>

#include "hello.h"

int main(int argc, char const* argv[]) {
    hello();

    // asan test: leak
    int* x = (int*)malloc(sizeof(int));

    // ubsan test:
    int y = -1;
    y <<= 5;
    printf("%d\n", y);

    return 0;
}
