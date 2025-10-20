#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
while (n > 0)
{
_putchar(' ');
n--;
}
if (n == 0)
{
_putchar('\n');
}
}
