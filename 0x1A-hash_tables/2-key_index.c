#include "hash_tables.h"

/**
* __key_index - Calculates the index of a key in a hash table.
* @key: The key for which to calculate the index.
* @size: The size of the hash table array.
* Return: The index at which the key/value pair is stored in the hash table array.
*/
ulint __key_index(const unsigned char *key, ulint size)
{
ulint idx;

if (size == 0)
return (0);

idx = hash_djb2(key);
return (idx % size);
}
