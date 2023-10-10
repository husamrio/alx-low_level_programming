#ifndef __SEARCH_ALGOS_H__
#define __SEARCH_ALGOS_H__

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define __local __attribute__((weak))

int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

/**
 * print_array - The function prints an array
 * @array: array used to print
 * @start: The position to start printing
 * @stop: The position to stop
 * ***************************
 * ***************************
 */
__local void print_array(int *array, int start, int stop)
{
	int i = start;

	for (; i < stop; ++i)
		printf("%d, ", array[i]);

	printf("%d\n", array[i]);
}

#endif