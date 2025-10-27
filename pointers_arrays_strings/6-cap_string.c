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
if (*p == 9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125)
{
while (*p == 9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125)
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
