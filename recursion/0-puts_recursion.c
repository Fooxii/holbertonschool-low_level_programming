#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: string being printed
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
char *a = (*s + (*s + 1));

_putchar('\n');
}
}
