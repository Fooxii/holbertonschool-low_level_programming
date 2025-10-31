#include "main.h"

/**
 * print_rev_recursion - function that prints a string in reverse
 * @s: string being printed
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}

_print_rev_recursion(s + 1);
_putchar(*s);
}
