#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of intergers
 * @min: first number of array
 * @max: last number of array
 * Return: pointer to new array or NULL if min > max or malloc fails
 */

int *array_range(int min, int max)
{
int i;
int *arr;
int diff = (max - min);
if (min > max)
{
return ((void *)0);
}

if (diff == 0)
{
diff = diff + 1;
}
arr = malloc(diff * sizeof(int));
if (arr == (void *)0)
{
return ((void *)0);
}

for (i = 0; diff > 0; i++)
{
arr[i] = min + i;
diff--;
}

return (arr);
}
