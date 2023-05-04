#include "main.h"
#include <stdio.h>

/**
 * print_array - print `n` elements of an array of integers
 * @a: int type array pointer
 * @n: int type integer
 * Description: Numbers have to be separated by comma and space.
 * Numbers must be displayed in the same order they are stored in array.
 * You can only use _putchar to print.
 * Alhamdulilah
 */

void print_array(int *a, int n)
{
	int w;

	w = 0;
	for (n--; n >= 0; n--, w++)
	{
		printf("%d", a[w]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
