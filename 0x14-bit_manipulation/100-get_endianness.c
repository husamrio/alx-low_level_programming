#include "main.h"

/**
* get_endianness - determines the endianess of the system
* ................................
* Return: returns 0 if the system is big endian, or 1 if it is little endian:
*/
int get_endianness(void)
{
unsigned int x = 1;
char *c = (char *) &x;

return (*c);

}
