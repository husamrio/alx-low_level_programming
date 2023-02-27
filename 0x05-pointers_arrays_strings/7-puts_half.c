#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: the string reference
 * Return: 0
 * Alhamdulilah
 */

void puts_half(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		;
	a++;
	for (a /= 2; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
