#include "main.h"

/**
* binary_to_uint - Converts a binary no. to an unsigned integer.
* @b: Pointer to a string of chars representing binary number
*
* Return: The converted number. If the string contains any characters 
* other than 0 or 1, or if b is NULL, returns 0.
* .....
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;

if (!b)
return (0);

while (*b)
{
if (*b != '0' && *b != '1')
return (0);
num = num * 2 + (*b++ - '0');
}

return (num);
}
