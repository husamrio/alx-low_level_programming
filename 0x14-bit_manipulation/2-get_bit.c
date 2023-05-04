#include "main.h"

/**
* get_bit - retrieves the value of a specific bit within a given no
* @n: the no. from which to retrive the bit
* @index: the position of the bit to retrieve
* ...
* Return: returns the value of the bit at the specified index or -1 if an error occurs
*/

int get_bit(unsigned long int n, unsigned int index)
{
if (index > (sizeof(n) * 8))
return (-1);

return ((n >> index) & 1);

}

