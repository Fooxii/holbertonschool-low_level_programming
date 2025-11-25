#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: pointer to list
 * Return: number of elements in linked list
 */

size_t list_len(const list_t *h)
{
size_t countNode = 0;
while (h != (void *)0)
{
countNode++;
h = h->next;
}
return (countNode);
}
