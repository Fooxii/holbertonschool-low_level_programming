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
const unsigned char *k = *key;
const unsigned long int index = key_index(*key, ht->size);
char *cpvalue, *cpkey, *temp;
if (ht == (void *)0 || key == (void *)0 || value == (void *)0)
{
return (0);
}

cpvalue = strdup(value);
cpkey = strdup(key);
if (ht->array[index] == (void *)0)
{
ht->array[index] = malloc(sizeof(hash_node_t));
ht->array[index]->value = cpvalue;
ht->array[index]->key = cpkey;
ht->array[index]->next = (void *)0;
}
else
{
temp = malloc(sizeof(hash_node_t));
temp = ht->array[index];
ht->array[index]->value = cpvalue;
ht->array[index]->key = cpkey;
ht->array[index]->next = temp;
}
return (1);
}
