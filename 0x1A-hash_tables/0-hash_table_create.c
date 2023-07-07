#include "hash_tables.h"

/**
* hash_table_create - Initializes a new hash table.
* @size: The desired size of the hash table.
*
* Return: A reference to the newly created hash table.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *ht;
hash_node_t **array;

ht = malloc(sizeof(hash_table_t));
if (!ht)
return (NULL);

array = calloc(size, sizeof(*array));
if (!array)
{
free(ht);
return (NULL);
}

ht->size = size;
ht->array = array;

return (ht);
}
