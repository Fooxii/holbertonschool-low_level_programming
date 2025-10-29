#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: initial segment of s
 * @accept: accepted bytes
 * Return: number of accepted bytes from s
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int count;
{
while (*s != '\0')
{
if (*s == *accept)
{
count++;
}
else
{
return (count);
}
s++;
}
return (count);
}
}
