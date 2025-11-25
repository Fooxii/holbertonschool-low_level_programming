#include "lists.h"
#include <string.h>

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: start of list
 * @str: string being printed
 * Return: the address of the new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
char *dupstr;
dupstr = strdup(str);
int length = strlen(dupstr);
if (dupstr == (void *)0)
{
return ((void *)0);
}

list_t *newNode;
newNode = malloc(sizeof(list_t));
if (newNode == (void *)0)
{
return ((void *)0);
}
newNode->str = dupstr;
newNode->len = length;
newNode->next = *head;
*head = &newNode;

return (newNode);
}
