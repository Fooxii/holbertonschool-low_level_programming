#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string being checked
 * @needle: substring being located
 * Return: pointer to start of substring, or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
char *h, *n;

if (*needle == '\0')
return (haystack);

while (*haystack != '\0')
{
h = haystack;
n = needle;

while (*h != '\0' && *n != '\0' && *h == *n)
{
h++;
n++;
}

if (*n == '\0')
return (haystack);

haystack++;
}

return ((void *)0);
}
