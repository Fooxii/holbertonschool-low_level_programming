#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string to be printed
 */

void print_rev(char *s)
{

int len = 0;
int length;

while (*s != '\0')
{
len++;
s++;
}

s--;

for (length = len; length > 0; length--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
