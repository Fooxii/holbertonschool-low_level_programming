#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table
 * @key: is the key
 * @value: value associated with the key
 * Return: 1 if sucess, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
char *cpvalue;
hash_node_t *temp, *node;
if (!ht || !key || key[0] == '\0' || !value)
{
return (0);
}
index = key_index((const unsigned char *)key, ht->size);
temp = ht->array[index];

while (temp)
{
if (strcmp(temp->key, key) == 0)
{
cpvalue = strdup(value);
if (!cpvalue)
return (0);

free(temp->value);
temp->value = cpvalue;
return (1);
}
temp = temp->next;
}

node = malloc(sizeof(hash_node_t));
if (!node)
return (0);

node->key = strdup(key);
node->value = strdup(value);

if (!node->key || !node->value)
{
free(node->key);
free(node->value);
free(node);
return (0);
}

node->next = ht->array[index];
ht->array[index] = node;

return (1);
}
