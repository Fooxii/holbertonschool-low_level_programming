#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: pointer to the head of the list
 * @n: interger being added to the new node
 * Return: adress of the new element, or NULL if it failed
 */

dlistint_t *add_nodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *temp;
new_node = malloc(sizeof(dlistint_t));
if (new_node == (void *)0)
{
return ((void *)0);
}
new_node->n = n;
new_node->next = (void *)0;
if (*head == (void *)0)
{
new_node->prev = (void *)0;
*head = new_node;
return (new_node);
}
temp = *head;
while (temp->next != (void *)0)
{
temp = temp->next;
}
temp->next = new_node;
new_node->prev = temp;
return (new_node);
}
