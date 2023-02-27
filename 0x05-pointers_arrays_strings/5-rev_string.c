#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: the used string to beb reversed
 * Return: 0
 * Alhamdulilah
 */

void rev_string(char *s)
{
	int len, v, half;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
	;
	v = 0;
	half = len / 2;

	while (half--)
	{
		temp = s[len - v - 1];
		s[len - v - 1] = s[v];
		s[v] = temp;
		v++;
	}
}
