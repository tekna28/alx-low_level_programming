#include "main.h"
#include <stddef.h>

/**
 * swap_int - swaps the values of two integers.
 *
 *@a: pointer to an int.
 *@b: pointer to an int.
 * Return: no return (Success)
 */
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
