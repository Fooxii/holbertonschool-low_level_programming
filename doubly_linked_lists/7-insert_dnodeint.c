#include "lists.h"

/**
 * insert_dnodeint_at_index -function that inserts new node at a given position
 * @h: pointer to head of the list
 * @idx: index of the list where the new node should be added
 * @n: data to insert in the new node
 * Return: adress of the new node, NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *temp;
unsigned int i;

if (h == (void *)0)
{
return ((void *)0);
}

if (idx == 0)
{
return (add_dnodeint(h, n));
}

temp = *h;
for (i = 0; temp != NULL && i < idx; i++)
{
if (i == idx - 1)
{
if (temp->next == NULL)
return (add_dnodeint_end(h, n));

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = temp->next;
new_node->prev = temp;
temp->next->prev = new_node;
temp->next = new_node;

return (new_node);
}
temp = temp->next;
}

return (NULL);
}
