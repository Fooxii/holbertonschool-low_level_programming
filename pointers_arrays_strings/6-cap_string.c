#include "main.h"

/**
 * cap_string - function that capetalizes all words
 * @str: string to capetalize
 * Return: capetalized string
 */

char *cap_string(char *str)
{
char *p = str;

while (*p != '\0')
{
if (*p == ' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}')
{
while (*p == ' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}')
{
p++;
}
if (*p >= 'a' && *p <= 'z')
{
*p = *p - 32;
}
}
p++;
}
return (str);
}
