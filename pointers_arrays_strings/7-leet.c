#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: pointer to string being encoded
 * Return: encoded string
 */

char *leet(char *str)
{
char *letters = "aAeEoOtTlL";
char *numbers = "4433007711";
char *p = str;
int i;

while (*p)
{
for (i = 0; letters[i] != '\0'; i++)
{
if (*p == letters[i])
{
*p = numbers[i];
break;
}
}
p++;
}
return (str);
}
