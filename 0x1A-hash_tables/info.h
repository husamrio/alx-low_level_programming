#ifndef __INFO_DEFS_H__
#define __INFO_DEFS_H__

/**
* struct hash_node_s - An element in a hash table.
*
* @key: A unique identifier, represented as a string.
* @value: The data associated with the key.
* @next: A reference to the next element in the list.
*/
typedef struct hash_node_s
{
char *key;
char *value;
struct hash_node_s *next;
} hash_node_t;

/**
* struct hash_table_s - A hash table data structure.
*
* @size: The number of elements in the array.
* @array: An array with a length of @size.
* Each element of this array is a reference to the first node in a linked list,
* allowing for collision resolution through chaining.
*/
typedef struct hash_table_s
{
unsigned long int size;
hash_node_t **array;
} hash_table_t;

/**
* struct shash_node_s - An element in a sorted hash table.
*
* @key: A unique identifier, represented as a string.
* @value: The data associated with the key.
* @next: A reference to the next element in the list.
* @sprev: A reference to the previous element in the sorted linked list.
* @snext: A reference to the next element in the sorted linked list.
*/
typedef struct shash_node_s
{
char *key;
char *value;
struct shash_node_s *next;
struct shash_node_s *sprev;
struct shash_node_s *snext;
} shash_node_t;


/**
* struct shash_table_s - A sorted hash table data structure.
*
* @size: The number of elements in the array.
* @array: An array with a length of @size.
* Each element of this array is a reference to the first node in a linked list,
* allowing for collision resolution through chaining.
* @shead: A reference to the first element in the sorted linked list.
* @stail: A reference to the last element in the sorted linked list.
*/
typedef struct shash_table_s
{
unsigned long int size;
shash_node_t **array;
shash_node_t *shead;
shash_node_t *stail;
} shash_table_t;


typedef unsigned long int ulint;

hash_table_t *hash_table_create(unsigned long int size);
void hash_table_delete(hash_table_t *ht);
void hash_table_print(const hash_table_t *ht);
char *hash_table_get(const hash_table_t *ht, const char *key);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
ulint hash_djb2(const unsigned char *str);

shash_table_t *shash_table_create(unsigned long int size);
void shash_table_delete(shash_table_t *ht);
void shash_table_print(const shash_table_t *ht);
char *shash_table_get(const shash_table_t *ht, const char *key);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);

/**
* key_index - gives index of a key
* @key: key
* @size: size of hash table array
* Return: index where key/value pair is stored in hash table array
*/
__attribute__((weak))ulint key_index(const unsigned char *key,
ulint size)
{
ulint idx;

if (size == 0)
return (0);

idx = hash_djb2(key);
return (idx % size);
}

/**
* hash_djb2 - implementation of the djb2 algorithm
* @str: string used to generate hash value
*
* Return: hash value
*/
__attribute__((weak))ulint hash_djb2(const unsigned char *str)
{
ulint hash;
int c;

hash = 5381;
for (; (c = *str++);)
hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

return (hash);
}

#endif
