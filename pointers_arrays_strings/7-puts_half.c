#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: string to be printed
 */

void puts_half(char *str)
{
int length = 0;
char *half = str;
while (*half != '\0')
{
half++;
length++;
}

length--;

if (length % 2 == 0)
{
half = str + length / 2;
}
else
{
half = str + length / 2 + 1;
}

while (*half != '\0')
{
_putchar(*half);
half++;
}
_putchar('\n');
}
