#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new string or NULL if malloc fails
 */

char *str_concat(char *s1, char *s2)
{
int size1 = 0, size2 = 0;
char *concat, *p;
char *a = s1, *b = s2;
if (s1 == (void *)0)
a = "";
if (s2 == (void *)0)
b = "";

while (*a != '\0')
{
size1++;
a++;
}
while (*b != '\0')
{
size2++;
b++;
}

concat = malloc((size1 + size2 + 1) * sizeof(char));
if (concat == (void *)0)
return ((void *)0);
p = concat;
a = s1 == (void *)0 ? "" : s1;
b = s2 == (void *)0 ? "" : s2;

while (*a != '\0')
{
*p = *a;
p++;
a++;
}
while (*b != '\0')
{
*p = *b;
p++;
b++;
}
*p = '\0';
return (concat);
}
