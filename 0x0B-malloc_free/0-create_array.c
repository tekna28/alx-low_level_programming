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

array = malloc(size * sizeof(char));

*array = c;

if (size == 0)
{
return (NULL);
}
if (size != 0)
{
return (array);
}
return (NULL);
}
