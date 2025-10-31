#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: string being printed
 * Return: void
 */

void _puts_recursion(char *s)
{
while (*s < '\0')
{
int n = 0;
_putchar(*s + n);
n++;
}
}
