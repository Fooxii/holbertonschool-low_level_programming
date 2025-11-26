#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data (n) of a list
 * @head: pointer to the head of the list
 * Return: sum of all the data (n) of a list
 */

int sum_dlistint(dlistint_t *head)
{
dlistint_t *temp = head;
int sum = 0;

while (temp != (void *)0)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
