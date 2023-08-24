#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *
 *@a: pointer to an int.
 *@n: integer.
 * Return:no return (Success)
 */
void reverse_array(int *a, int n)
{
int i;
int c;
c = 0;
for (i = 0; i < n--; i++)
{
c = a[n];
a[n] = a[i];
a[i] = c;
}
}
