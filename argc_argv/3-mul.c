#include "main.h"

/**
 * str_to_int - converts a string to an integer
 * @s: pointer to the string to convert
 * Return: the converted integer value
 */

int str_to_int(char *s)
{
int sign = 1, result = 0;

if (*s == '-')
{
sign = -1;
s++;
}

while (*s)
{
result = result * 10 + (*s - '0');
s++;
}

return result * sign;
}

/**
 * print_number - prints an integer using _putchar
 * @n: the number to print
 * Return: void
 */

void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}

if (n / 10)
print_number(n / 10);

_putchar((n % 10) + '0');
}

/**
 * main - multiplies two numbers passed as arguments
 * @argc: argument count
 * @argv: argument vector (array of argument strings)
 * Return: 0 on success, 1 if incorrect number of arguments
 */

 int main(int argc, char *argv[])
{
int a, b, result;
if (argc != 3)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
return 1;
}

int a = str_to_int(argv[1]);
int b = str_to_int(argv[2]);
result = a * b;


print_number(result);
_putchar('\n');

return 0;
}
