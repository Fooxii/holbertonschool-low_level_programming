#include <stdio.h>

/**
 * main - prints all combinations from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num = 0;

while (num < 10)
{
putchar(num + '0');
if (num++ != 9)
{
putchar(',');
putchar(' ');
}
}
return (0);
}
