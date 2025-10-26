#include "main.h"

/**
 * _strncat - merges src to the end of dest string for n char
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of characters from src being merged to dest
 * Return: dest string merged with src string for n char
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
