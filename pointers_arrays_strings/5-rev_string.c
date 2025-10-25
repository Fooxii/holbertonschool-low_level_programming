#include "main.h"

/*
 * rev_string - function that reverses a string
 * @s: string to be printed
 */

void rev_string(char *s)
{
int length;


while (*s != '\0')
{
s++;
}

for (length = s - 1; length > 0; length--)
{
_putchar(*s);
s--;
}
}
