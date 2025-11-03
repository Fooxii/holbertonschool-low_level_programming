#include "main.h"

/**
 * is_digit_string - checks if a string only contains digits
 * @s: string to check
 * Return: 1 if digits only, otherwise 0
 */
int is_digit_string(char *s)
{
int i = 0;

if (s[0] == '\0')
return (0);

while (s[i])
{
if (s[i] < '0' || s[i] > '9')
return (0);
i++;
}
return (1);
}

/**
 * str_to_int - converts a string of digits to an integer
 * @s: string to convert
 * Return: integer value
 */
int str_to_int(char *s)
{
int result = 0;

while (*s)
{
result = result * 10 + (*s - '0');
s++;
}
return (result);
}

/**
 * print_number - prints an integer using _putchar
 * @n: integer to print
 */
void print_number(int n)
{
if (n / 10)
print_number(n / 10);
_putchar((n % 10) + '0');
}

/**
 * main - adds positive numbers passed as arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int i = 1, sum = 0;

if (argc == 1)
{
_putchar('0');
_putchar('\n');
return (0);
}

while (i < argc)
{
if (!is_digit_string(argv[i]))
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
return (1);
}
sum += str_to_int(argv[i]);
i++;
}

print_number(sum);
_putchar('\n');
return (0);
}
