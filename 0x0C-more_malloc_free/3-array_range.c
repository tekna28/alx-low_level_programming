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

p = malloc((sizeof(int) * (max - min)) + sizeof(int));
if (p == NULL)
return (NULL);

while (min <= max)
{
p[i] = min;
i++;
min++;
}
return (p);
}
