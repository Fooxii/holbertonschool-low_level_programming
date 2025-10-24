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

while (*s != '\0')
{
len++;
s++;
}


for (len -= 1; len >= 0; len--)
{
_putchar(*s);
s--;
}

}
