#include "main.h"

/**
* clear_bit - changes the value of a specific bit within a given number to 0
* @n: pointer to the no. in which to clear the bit
* @index: the position of the bit to clear
* ...........
* Return: 1 if it good, or -1 if an error occurred
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > (sizeof(*n) * 8))
return (-1);

*n &= ~(1UL << index);

return (1);
}
