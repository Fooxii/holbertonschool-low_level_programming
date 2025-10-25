#include "main.h"

/**
 * puts2 - function prints every other character of a string
 * @str: string to be printed
*/

void puts2(char *str)
{

while (*str != '\0')
{
_putchar(*str);
str++;
if (*str == '\0')
{
return;
}

str++;
}
}
