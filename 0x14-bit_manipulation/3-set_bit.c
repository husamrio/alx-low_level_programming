#include "main.h"

/**
* set_bit - changes the value of a specific bit within a given no. to 1
* @n: pointer to the no. in which to set the bit.
* @index:the position of the bit to set
*.....
* Return: 1 if ok, else -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > (sizeof(*n) * 8))
return (-1);

*n |= (1UL << index);/* bitwise OR operator*/
return (1);
}
