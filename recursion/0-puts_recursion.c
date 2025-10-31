#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: string being printed
 * Return: void
 */

void _puts_recursion(char *s)
{
char *a = (*s + (*s + 1));
if (*a == '\0')
{
return (*s);
}
}
