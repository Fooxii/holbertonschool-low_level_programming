#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of intergers
 * @n: number of elements to be printed
 * @a: array of intergers being stored
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i + 1 == n)
{
printf("\n");
}
else
{
printf(", ");
}

}
}
