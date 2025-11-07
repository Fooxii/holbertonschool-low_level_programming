#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array using malloc
 * @nmemb: number of elements in array
 * @size: size in bytes of each element in array
 * Return: pointer to allocated memory,NULL if nmemb or size=0 or malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *arr;
if (nmemb == 0 || size == 0)
{
return ((void *)0);
}

arr = malloc(nmemb * size);
if (arr == (void *)0)
{
return ((void *)0);
}

for (i = 0; i < (nmemb * size); i++)
{
arr[i] = 0;
}

return (arr);
}
