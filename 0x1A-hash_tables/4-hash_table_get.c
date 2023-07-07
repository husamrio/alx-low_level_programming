#include "hash_tables.h"

/**
* hash_table_get - retrieves the value associated with a given key
* @ht: pointer to the hash table
* @key: key to search for
* Return: value associated with the key; or NULL if key not found
*/
char *hash_table_get(const table_t *ht, const char *key)
{
ulint idx;
node_t *tmp;

/* calculate index in hash table where key is located */
/* traverse linked list to find node with matching key */

if (!ht || !key)
return (NULL);
idx = key_index((const unsigned char *)key, ht->size);

tmp = (ht->array)[idx];
while (tmp != NULL && strcmp(tmp->key, key) != 0)
tmp = tmp->next;
if (!tmp)
return (NULL);
else
return (tmp->value);
}
