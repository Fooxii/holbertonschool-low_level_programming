#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;
num = 0;
while (num < 10)
{
putchar((num % 10));
num++;
}
putchar('\n');
return (0);
}
