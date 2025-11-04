#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that duplicates the string given as parameter
 * and returns a pointer to the duplicates newly allocated space in memory
 * @str: string being duplicated
 * Return: pointer to allocated space containing copy of str,
 * or NULL if str is empty or malloc fails
 */

char *_strdup(char *str)
{
int size = 0;
char *dup;
char *p = str;
char *copy;

if (str == (void *)0)
{
return ((void *)0);
}

while (*p != '\0')
{
size++;
p++;
}

dup = malloc((size + 1) * sizeof(char));

if (dup == (void *)0)
{
return ((void *)0);
}

copy = dup;
while (*str != '\0')
{
*copy = *str;
copy++;
str++;
}

*copy = '\0';
return (dup);
}
