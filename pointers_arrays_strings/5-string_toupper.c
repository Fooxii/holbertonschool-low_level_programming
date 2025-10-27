#include "main.h"

/**
 * string_toupper - function that changes lowercase letters to uppercase
 * @str: string to capetalize
 * Return: capetalized string
 */

char *string_toupper(char *str)
{
char *p = str;

while (*p != '\0')
{
if (*p >= 'a' && *p <= 'z')
{
*p = *p - 32;
}
p++;
}
return (str);
}
