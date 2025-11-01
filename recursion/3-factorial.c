#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: number for the factorial
 * Return: returns factorial of n, 1 if n = 0, and -1 if n < 0
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
else
{
return (factorial(n * (n - 1)));
}
}
