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
int spaces = n - 1;
while (spaces > 0)
{
_putchar(' ');
spaces--;}
_putchar('\\');
_putchar('\n');
n--;
}
if (n <= 0)
{
_putchar('\n');
}
}
