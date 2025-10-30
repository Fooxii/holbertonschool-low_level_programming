#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string to search
 * @accept: bytes being looked for
 * Return: pointer to first occurence, or NULL if none found
 */

char *_strpbrk(char *s, char *accept)
{
char *a;

while (*s != '\0')
{
a = accept;

while (*a != '\0')
{
if (*s == *a)
return (s);
a++;
}
s++;
}
return ((void *)0);
}
