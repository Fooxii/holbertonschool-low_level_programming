#include <stdio.h>

/**
 * main - prints all combinations from 00 to 99
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num = 0;

while (num <= 99)
{
putchar((num / 10) + '0');
putchar((num % 10) + '0');

if (num != 99)
{
putchar(',');
putchar(' ');
}

num++;
}

return (0);
}
