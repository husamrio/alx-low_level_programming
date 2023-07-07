#include "hash_tables.h"

/**
* __hash_djb2 - Calculates a hash value using the djb2 algorithm.
* @str: The input string for which to generate the hash value.
*
* Return: The resulting hash value.
*/
ulint __hash_djb2(const unsigned char *str)
{
ulint hash;
int c;

hash = 5381;
for (; (c = *str++);)
hash = ((hash << 5) + hash) +c; /* hash * 33 + c */

return (hash);
}
