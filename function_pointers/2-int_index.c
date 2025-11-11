#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function that searches for an interger
 * @array: array
 * @size: size of array
 * @cmp: function that used to compare values
 * Return: -1 if size is <= 0 or if no matches found,
 * return the index of first element with match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == (void *)0 || cmp == (void *)0 || size <= 0)
{
return (-1);
}

for (i = 0; i != size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (-1);
}
