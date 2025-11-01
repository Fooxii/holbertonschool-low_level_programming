#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string being checked
 * Return: n the length of the string *s
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
