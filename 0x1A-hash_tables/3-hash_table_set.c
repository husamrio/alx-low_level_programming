#include "hash_tables.h"

/**
* create_and_add_node - Allocate memory, assign values, and insert a node into the hash table.
* @ht: The hash table.
* @key: The key (must not be an empty string).
* @value: The value.
* @idx: The index where the node should be inserted in the hash table.
* Return: 1 if successful, 0 if failed.
*/
int create_and_add_node(table_t *ht, const char *key, const char *value, ulint idx)
{
node_t *node = NULL;
char *k;
char *v;

node = malloc(sizeof(node_t));
if (!node)
return (0);

k = strdup(key);
if (!k)
{
free(node);
return (0);
}

v = strdup(value);
if (!v)
{
free(k);
free(node);
return (0);
}

node->key = k;
node->value = v;

if ((ht->array)[idx] == NULL)
node->next = NULL;
else
node->next = (ht->array)[idx];
(ht->array)[idx] = node;

return (1);
}

/**
* hash_table_set - Adds an element to the hash table.
* @ht: The hash table to add or update the key/value to.
* @key: The key. Cannot be an empty string.
* @value: The value associated with the key.
* Return: 1 if it succeeded, 0 otherwise.
*/
int hash_table_set(table_t *ht, const char *key, const char *value)
{
/* Get index */
/* If key already exists, update value and return */
/* Else create node */
/* Set ht idx ptr to node; else add node to front if collision */

ulint idx;
node_t *node = NULL;
char *v;

if (!ht || !(ht->array) || !key || !strlen(key) || !value)
return (0);

idx = key_index((const unsigned char *)key, ht->size);

node = (ht->array)[idx];
while (node && (strcmp(key, node->key) != 0))
node = node->next;
if (node)
{
v = strdup(value);
if (!v)
return (0);
if (node->value)
free(node->value);
node->value = v;
return (1);
}

return (create_and_add_node(ht, key, value, idx));
}
