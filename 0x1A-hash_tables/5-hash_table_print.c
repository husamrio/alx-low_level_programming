#include "hash_tables.h"

/**
* hash_table_print - prints the key/value pairs of a hash table in order
* @ht: pointer to the hash table
*/
void hash_table_print(const table_t *ht)
{
ulint idx = 0;
node_t *node;
char *comma = "";

if (!ht || !ht->array)
return;

putchar('{');
while (idx < ht->size)
{
node = ((ht->array)[idx]);
while (node)
{
printf("%s'%s': '%s'", comma, node->key, node->value);
comma = ", ";
node = node->next;
}
idx++;
}
puts("}");
}
