#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to first integer
 * @b: pointer to second integer
 *
 * Return: void
 */
int temp;
void swap_int(int *a, int *b)
{
temp = *a;
*a = *b;
*b = temp;
}
