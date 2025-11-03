#include "main.h"

/**
 * print_number - function that turns string of number/s into digits
 * @n: number being converted from string to digit/s
 */

void print_number(int n)
{
if (n / 10)
print_number(n / 10);
_putchar((n % 10) + '0');
}

/**
 * main - function that prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: void
 * Return: 0
  */

int main(int argc, char *argv[])
{
(void)argv;

print_number(argc - 1);
_putchar('\n');
return (0);
}
