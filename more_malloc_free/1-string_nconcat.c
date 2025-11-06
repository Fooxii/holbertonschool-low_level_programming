#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that merges two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes from s2
 * Return: merged string or NULL if malloc fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int l1 = 0, l2 = 0, i;
char *s3, *p;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[l1])
l1++;
while (s2[l2])
l2++;

if (n > l2)
n = l2;

s3 = malloc(l1 + n + 1);
if (s3 == NULL)
return (NULL);

p = s3;

for (i = 0; i < l1; i++)
*p++ = *s1++;
for (i = 0; i < n; i++)
*p++ = *s2++;

*p = '\0';
return (s3);
}
