#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * but for multiples of three print Fizz
 * for the multiples of five print Buzz
 * for numbers which are multiples of both three and five print FizzBuzz
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
putchar(' ');
}
else if (i % 3 == 0)
{
printf("Fizz");
putchar(' ');
}
else if (i % 5 == 0)
{
printf("Buzz");
putchar(' ');
}
else
{
printf("%d", i);
putchar(' ');
}
}
return (0);
}
