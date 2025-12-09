#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table being printed
 * @Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
if (!ht)
{
return;
}
printf("{");
for (i = 0; i < ht->size; i++)
{
printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
if (i < ht->size - 1)
{
printf(", ");
}
}
printf("}\n");
}
