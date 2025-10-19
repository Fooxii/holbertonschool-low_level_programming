#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char b16 = '0';
while (b16 <= '9')
{
putchar(b16);
b16++;
}
b16 = 'a';
while (b16 <= 'f')
{
putchar(b16);
b16++;
}
}
