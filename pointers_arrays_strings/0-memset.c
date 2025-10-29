#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to memory area
 * @b: constant byte to fill memory with
 * @n: number of bytes to fill
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
char *p = s;
if (n <= 0)
{
return (s);
}

while (n > 0)
{
*p = b;
p++;
n--;
}

return (s);
}
