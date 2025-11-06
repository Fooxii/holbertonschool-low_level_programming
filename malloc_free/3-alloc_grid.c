#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of intergers
 * @width: the width of the 2d array
 * @height: the height of the 2d array
 * Return: 2d array, NULL if width or height < 0 and if malloc fails
 */

int **alloc_grid(int width, int height)
{
int **arr2d;
int h;
int w;

if (width <= 0 || height <= 0)
{
return ((void *)0);
}

arr2d = malloc(height * sizeof(int *));
if (arr2d == (void *)0)
{
return ((void *)0);
}

for (h = 0; h < height; h++)
{
arr2d[h] = malloc(width * sizeof(int));
if (arr2d[h] == (void *)0)
{
while (h > 0)
{
h--;
free(arr2d[h]);
}
free(arr2d);
return ((void *)0);
}

for (w = 0; w < width; w++)
{
arr2d[h][w] = 0;
}
}

return (arr2d);
}
