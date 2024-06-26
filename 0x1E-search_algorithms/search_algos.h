#ifndef MAIN_H__
#define MAIN_H__
#include <stdlib.h>


int min_int(int a, int b);

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_divide(int *array, size_t start, size_t end, int value);
int jump_search(int *array, size_t size, int value);
#endif
