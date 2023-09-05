#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously
 *created by alloc_grid function.
 *
 *@grid: pointer to a pointer to an int.
 *@height: pointer to a pointer to an int.
 * Return: no return (Success)
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
