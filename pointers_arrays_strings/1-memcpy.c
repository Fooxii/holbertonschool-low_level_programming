#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: pointer to memory area being copied into
 * @src: pointer to memory area being copied
 * @n : number of copied bytes
 * Return: dest with copied memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
if (n <= 0)
{
return (dest);
}

char *p = dest;
while (n > 0)
{
*p = src;
p++;
src++;
n--;
}

return (dest);
}
