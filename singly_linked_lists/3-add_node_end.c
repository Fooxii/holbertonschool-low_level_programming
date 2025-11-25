#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: start of list
 * @str: string being printed
 * Return: the address of the new element or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
char *dupstr;
list_t *newNode;
list_t *temp;
unsigned int length = 0;

dupstr = strdup(str);
if (dupstr == (void *)0)
{
return ((void *)0);
}
while (dupstr[length] != '\0')
{
length++;
}

newNode = malloc(sizeof(list_t));
if (newNode == (void *)0)
{
return ((void *)0);
}

newNode->str = dupstr;
newNode->len = length;
newNode->next = (void *)0;

if (*head == (void *)0)
{
return (newNode);
}

temp = *head;
while (temp->next != (void *)0)
{
temp = temp->next;
}
temp->next = newNode;

return (newNode);
}
