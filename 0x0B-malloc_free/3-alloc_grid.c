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
int i, j, k, l;
if (width <= 0 || height <= 0)
return (NULL);
array = malloc(sizeof(int) * height);
if (array == NULL)
{
free(array);
return (NULL);
}
for (k = 0; k < height; k++)
{
array = malloc(sizeof(int) * width);
if (array[k] == NULL)
{
for (l = k; l >= 0; l--)
{
free(array[l]);
}
free(array);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
array[i][j] = 0;
}
}
return (array);
}
