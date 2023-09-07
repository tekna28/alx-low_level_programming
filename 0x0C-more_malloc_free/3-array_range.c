#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - creates an array of integers.
 *
 *@min: integer.
 *@max: integer.
 * Return: pointer to the newly created array (Success)
 */
int *array_range(int min, int max)
{
int i;
int *p;

if (min > max)
return (NULL);
if (max - min == 0)
{
p = malloc(sizeof(int));
p[0] = min;
}
else
{
p = malloc(sizeof(int) * (max - min + 1));
if (p == NULL)
return (NULL);
for (i = 0; i <= max; i++, min++)
p[i] = min;
}
return (p);
}
