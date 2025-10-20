#include "main.h"

/**
 * more_numbers - prints the numbers from 0 to 14, 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
int n, c;

for (c = 0; c <= 10; c++)
{
for (n = 0; n <= 14; n++)
{
_putchar(n);
}
_putchar('\n');
}
}
