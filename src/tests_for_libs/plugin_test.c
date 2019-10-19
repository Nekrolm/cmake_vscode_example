#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

typedef int (*algo_func)(int, int);


int main(int argc, char* argv[]){

    if (argc < 2){
        printf("path to library is not provided!\n");
        return EXIT_FAILURE;
    }

    void* library = dlopen(argv[1], RTLD_LAZY);

    if (library == NULL){
        printf("can't open library %s\n", argv[1]);
        return EXIT_FAILURE;
    }
    
    algo_func add = (algo_func)(dlsym(library, "add"));

    algo_func sub = (algo_func)(dlsym(library, "sub"));

    algo_func mul = (algo_func)(dlsym(library, "mul"));

    if (!add || !sub || !mul){
        printf("cant't load symbols!\n");

        dlclose(library);
        return EXIT_FAILURE;
    }

    printf("2 + 2 = %d\n", add(2, 2));

    printf("2 - 2 = %d\n", sub(2, 2));

    printf("2 * 2 = %d\n", mul(2, 2));

    dlclose(library);
    return EXIT_SUCCESS;
}