#include <stdio.h>

/**
 *Work done by Husamrio
 *main - print 0123456789 using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
