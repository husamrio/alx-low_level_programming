#include "search_algos.h"

/**
 * linear_search - Linear search algorithm
 * *********************
 * @array: integer array
 * *********************
 * @size: size of the array
 * ************************
 * @value: value to search for
 * ****************************
 * Return: Value index in array or -1
 * *****************************
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!size)
		goto KILL;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}

KILL:	return (-1);
}
