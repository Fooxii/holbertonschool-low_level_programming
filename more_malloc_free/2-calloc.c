#include "main.h"
#include <stdlib.h>



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

for (i = 0; i != nmemb; i++)
{
arr[i] = '0';
}
return (arr);
}
