#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name -  prints a name.
 *
 *@name: pointer to a char.
 *@f: function pointer.
 * Return: no return (Success)
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
