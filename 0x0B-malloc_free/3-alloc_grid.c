#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 *@width: integer.
 *@height: integer.
 * Return: pointer to a pointer to an int (Success)
 */
int **alloc_grid(int width, int height)
{
int **array;
int i, j;
if (width <= 0 || height <= 0)
return (NULL);
array = (int **) malloc(sizeof(int *) * width);
if (array == NULL)
{
free(array);
return (NULL);
}
for (i = 0; i < width; i++)
{
array[i] = malloc(sizeof(int) * height);
for (j = 0; j < height; j++)
{
array[i][j] = 0;
}
}
return (array);
}
