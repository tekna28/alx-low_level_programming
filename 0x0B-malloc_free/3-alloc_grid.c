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
array = malloc(sizeof(int *) * height);
if (array == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
array[i] = malloc(sizeof(int) * width);
if (array[i] == NULL)
{
while (--i >= 0)
{
free(array[i]);
}
free(array);
return (NULL);
}
for (j = 0; j < width; j++)
{
array[i][j] = 0;
}
}
return (array);
}
