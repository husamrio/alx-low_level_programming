#include "main.h"

/**
* print_binary - Prints the binary rep of a no.
* @n: The no. to print in binary characters
* ...
*/
void print_binary(unsigned long int n)
{
if (n > 1)
print_binary(n >> 1);
_putchar((n & 1) + '0');

}
