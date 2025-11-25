#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: start of list
 * @str: string being printed
 * Return: the address of the new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
char *dupstr;
list_t *newNode;
unsigned int length;

dupstr = strdup(str);
if (dupstr == (void *)0)
{
return ((void *)0);
}
length = strlen(dupstr);

newNode = malloc(sizeof(list_t));
if (newNode == (void *)0)
{
return ((void *)0);
}

newNode->str = dupstr;
newNode->len = length;
newNode->next = *head;
*head = newNode;

return (newNode);
}
