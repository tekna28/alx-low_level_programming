#include "function_pointers.h"
#include <stddef.h>

/**
 * main - executes a function given as a parameter on
 *each element of an array.
 *
 *@array: pointer to an integer.
 *@size: unsigned integer.
 *@action: function pointer.
 * Return: no return (Success)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array != NULL && action != NULL && size != 0)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
