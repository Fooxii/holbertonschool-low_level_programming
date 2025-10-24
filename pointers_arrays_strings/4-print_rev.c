#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 *
 * Return: void
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


for (length = len; length >= 0; length--)
{
_putchar(*s);
s--;
if (length == 0)
{
_putchar('\n');
return;
}
}

}
