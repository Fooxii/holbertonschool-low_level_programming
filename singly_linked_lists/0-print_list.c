#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints all elements of a list_t list
 * @h: pointer to list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
size_t countNode = 0;
while (h != (void *)0)
{
if (h->str == (void *)0)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", h->len, h->str);
}
countNode++;
h = h->next;
}
return (countNode);
}
