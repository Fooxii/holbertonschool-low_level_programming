#include "main.h"

/**
 * _strcat - merges two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return: dest string merged with src string
 */

char *_strncat(char *dest, char *src, int n)
{

char *p = dest;
int n;

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
