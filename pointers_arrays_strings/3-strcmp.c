#include "main.h"

/**
 * _strcmp - function that compares  strings s1 and s2
 * @s1: pointer to string being compared
 * @s2: pointer to string being compared
 * Return: 0 if equal, -1 if s1 < s2, 1 if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
int s1count = 0;
int s2count = 0;
while (*s1 != '\0')
{
s1++;
s1count++;
}
while (*s2 != '\0')
{
s2++;
s2count++;
}

if (s1count == s2count)
{
return (0);
}

else if (s1count < s2count)
{
return (-1);
}

else if (s1count > s2count)
{
return (1);
}
}
