#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 * @head: pointer to the head of the list
 * @n: value in new node
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;
new_node = malloc(sizeof(dlistint_t));
if (new_node == (void *)0)
return ((void *)0);

new_node->n = n;
new_node->prev = (void *)0;
new_node->next = head;
if (*head != (void *)0)
(*head)->prev = new_node;
*head = new_node;
return (new_node);
}
