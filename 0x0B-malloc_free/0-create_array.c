#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 *and initializes it with a specific char.
 *
 *@size: unsigned integer.
 *@c: character.
 * Return: NULL if size = 0
 *a pointer to the array, or NULL if it fails (Success)
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

array = malloc(size * sizeof(char));

if (size == 0)
{
return (NULL);
}

if (array == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
array[i] = c;
}

return (array);
}
