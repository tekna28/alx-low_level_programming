#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 *followed by a new line.
 *
 *@a: pointer to an int.
 *@n: integer.
 * Return: no return (Success)
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
if (a[i] != a[n - 1])
{
printf("%d, ", a[i]);
}
else
{
printf("%d", a[i]);
}
}
printf("\n");
}
