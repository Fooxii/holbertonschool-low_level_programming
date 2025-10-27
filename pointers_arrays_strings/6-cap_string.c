#include "main.h"

/**
 * cap_string - function that capetalizes all words
 * @str: string to capetalize
 * Return: capetalized string
 */

char *cap_string(char *str)
{
char *p = str;
if (*p >= 'a' && *p <= 'z')
{
*p = *p - 32;
}

while (*p != '\0')
{
if (*p == ' ' || *p == '\t' || *p == '\n' || *p == ',' ||
*p == ';' || *p == '.' || *p == '!' || *p == '?' ||
*p == '"' || *p == '(' || *p == ')' || *p == '{' || *p == '}')

{
while (*p == ' ' || *p == '\t' || *p == '\n' || *p == ',' ||
*p == ';' || *p == '.' || *p == '!' || *p == '?' ||
*p == '"' || *p == '(' || *p == ')' || *p == '{' || *p == '}')
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
