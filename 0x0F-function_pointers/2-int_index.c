#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - searches for an integer.
 *
 *@array: pointer to an integer.
 *@size: integer.
 *@cmp: function pointer.
 * Return: the index of the first element for which the
 *cmp function does not return 0 (Success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
{
return (-1);
}
if (array != NULL && cmp != NULL && size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}
return (-1);
}
