#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: the hash table being deleted
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *current, *temp;

if (!ht)
{
return;
}

for (i = 0; i < ht->size; i++)
{
current = ht->array[i];
while (current != (void *)0)
{
temp = current->next;
free(current->key);
free(current->value);
free(current);
current = temp;
}
}
free(ht->array);
free(ht);
}
