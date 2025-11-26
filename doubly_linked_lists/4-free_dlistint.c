#include "lists.h"

/**
 * free_dlistint - function that frees a list
 * @head: pointer to the head of the list
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

while (head != (void *)0)
{
temp = (head)->next;
free(head);
head = temp;
}
}
