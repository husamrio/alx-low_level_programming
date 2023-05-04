#include "main.h"

/**
* flip_bits - calculates the no. of bits that need to be flipped to
* converts one no. to another
* @n: the first no.
* @m: the second no.
* ..........
* Return: returns the no. of bits that need to be flipped to convert from n to m.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x = n ^ m;
unsigned int count = 0;

while (x)
{
count += x & 1;
x >>= 1;

}

return (count);
}

