#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element, NULL if key is not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *node;
if (!ht || !key || *key == '\0')
{
return ((void *)0);
}
index = key_index((const unsigned char *)key, ht->size);
node = ht->array[index];
while (node)
{
if (strcmp(node->key, key) == 0)
{
return (node->value);
}
node = node->next;
}
return ((void *)0);
}
