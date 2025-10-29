#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string being checked
 * @c: character being located
 * Return: pointer to first occurence of c or NULL if c is not found
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return ((void *)0);
}
