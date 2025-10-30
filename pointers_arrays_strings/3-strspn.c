#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: initial segment of s
 * @accept: accepted bytes
 * Return: number of accepted bytes from s
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
char *a;

while (*s != '\0')
{
a = accept;
while (*a != '\0')
{
if (*s == *a)
{
count++;
break;
}
a++;
}
if (*a == '\0')
return (count);

s++;
}

return (count);
}
