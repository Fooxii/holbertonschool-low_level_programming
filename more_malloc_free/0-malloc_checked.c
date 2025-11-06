#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size of memory being allocated
 * Return: pointer to the allocated memory or NULL if malloc fails
 */

void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == (void *)0)
{
exit(98);
}
return (ptr);
}
