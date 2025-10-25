#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of intergers
 * @a: pointer to the first element of the array
 * @n: number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
int i;

if (n <= 0)
{
printf("\n");
return;
}


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
