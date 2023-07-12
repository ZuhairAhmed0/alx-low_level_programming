#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int helper(int *array, size_t first, size_t last, int value);
int binary_search(int *array, size_t size, int value);

#endif
