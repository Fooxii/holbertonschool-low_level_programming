#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that merges two strings
 * @s1: first string
 * @s2: second string
 * @n: amount of s2 being merged to s1
 * Return: Merged strings or NULL if malloc fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int l1, l2;
char *s3, *merge;

if (s1 == (void *)0)
{
s1 = "";
}
if (s2 == (void *)0)
{
s2 = "";
}
char *p1 = s1;
char *p2 = s2;

for (l1 = 0; *p1 != '\0'; l1++)
{
p1++;
}
for (l2 = 0; *p2 != '\0'; l2++)
{
p2++;
}
if (n > l2)
{
n = l2;
}
s3 = malloc((l1 + n + 1) * sizeof(char));

if (s3 == (void *)0)
{
return ((void *)0);
}
merge = s3;
while (*s1 != '\0')
{
*merge = *s1;
s1++;
merge++;
}

while (*s2 != '\0' && n > 0)
{
*merge = *s2;
s2++;
merge++;
n--;
}
*merge = '\0';
return (s3);
}
