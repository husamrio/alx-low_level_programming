#include "main.h"

/**
 * _puts - prints a string and a new line
 * @str: pointer to a string to print
 * husamrio alxhd
 * Return: 0
 */

void _puts(char *str)
{
	int k = 0;

	while (str[k])
	{
		_putchar(str[k]);
		k++;
	}
	_putchar('\n');
}
