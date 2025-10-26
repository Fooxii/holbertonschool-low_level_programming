#include "main.h"

/**
 * _strcmp - function that compares  strings s1 and s2
 * @s1: pointer to string being compared
 * @s2: pointer to string being compared
 * Return: 0 if equal, -1 if s1 < s2, 1 if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{

while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
