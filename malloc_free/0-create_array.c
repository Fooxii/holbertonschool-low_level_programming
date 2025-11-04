#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with a char
 * @size: size of the array
 * @c: character used to initialize the array
 *
 * Return: pointer to the array, or NULL if size is 0 or memory fails
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

if (size == 0)
return ((void *)0);

array = malloc(size * sizeof(char));
if (array == (void *)0)
return ((void *)0);

for (i = 0; i < size; i++)
array[i] = c;

return (array);
}
