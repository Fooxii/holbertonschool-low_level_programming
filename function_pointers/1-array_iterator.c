#include "function_pointers.h"
#include <stdlib.h>


/**
 * array_iterator - function that executes a function given as a parameter
 *  on each element of an array
 * @array: array
 * @size: size of the array
 * @action: is a pointer to the function being executed on each element
 * Return: 
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array == (void *)0 || action == (void *)0)
{
return;
}

for (i = 0; i < size; i++)
{
action(array[i]);
}
}
