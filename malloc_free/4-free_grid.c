#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2d grid previously created
 * @arr2d: 2d grid being freed
 * @height: height of 2d grid
 */

void free_grid(int **arr2d, int height)
{
int i;

for (i = 0; i <= height; i++)
{
free(arr2d[i]);
}
}
