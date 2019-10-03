#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int int_comparer(const void* left, const void* right)
{
    return *((const int*)left) - *((const int*)right);
}

int main(int argc, char* argv[]){
    int* array = (int*)malloc((argc - 1) * sizeof(int));

    for (int i = 1; i < argc; ++i)
        array[i-1] = atoi(argv[i]);

    qsort(array, argc-1, sizeof(int), int_comparer);

    for (int i = 0; i < argc - 1; ++i)
        printf("%d ", array[i]);
    printf("\n");


    free(array);
    return EXIT_SUCCESS;
}