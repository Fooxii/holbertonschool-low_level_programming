#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: pointer to head of the list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
size_t nodeCount = 0;

while (h->prev != (void *)0)
{
h = h->prev;
}

while (h != (void *)0)
{
printf("%i\n", h->n);
nodeCount++;
h = h->next;
}
return (nodeCount);
}
