#include "function_pointers.h"
#include <stdlib.h>



void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;

if (array == (void *)0 || action == (void *)0)
{
return;
}

for (i = 0; i < size; i++)
{
action(array[i]);
}
}
