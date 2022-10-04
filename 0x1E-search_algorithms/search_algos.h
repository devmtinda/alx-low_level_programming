#ifndef ALGOS_H
#define ALGOS_H
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <math.h>
/*Prototype declarations*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
#endif
