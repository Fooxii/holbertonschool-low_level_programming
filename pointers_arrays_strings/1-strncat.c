#include "main.h"

/**
 * _strcat - merges two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return: dest string merged with src string
 */

char *_strcat(char *dest, char *src)
{

char *p = dest;
int *n = n;

while (*p != '\0')
{
p++;
}

if (n <= 0)
{
return (dest);
}

while (*src < n)
{
*p = *src;
p++;
src++;
}


*p = '\0';

return (dest);
}
