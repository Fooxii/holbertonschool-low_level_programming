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
while (*s == *accept && *s != '\0')
{
count++;
s++;
}
return (count);
}
