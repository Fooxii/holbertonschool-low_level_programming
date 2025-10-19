#include <stdio.h>

/**
 * main - prints all combinations from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num = 0;


while (num < 9)
{
putchar(num + '0');
putchar(',');
putchar(' ');
num++;
if (num == 9)
{
putchar(num + '0');
}
}
return (0);
}
