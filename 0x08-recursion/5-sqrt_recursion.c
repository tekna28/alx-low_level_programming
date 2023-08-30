#include "main.h"

int square_root(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 *@n: integer.
 * Return: the natural square root of n (Success)
 */
int _sqrt_recursion(int n)
{
return (square_root(n, 1));
}

/**
 * square_root - calculates the natural square root of a number.
 *
 *@n: integer.
 *@i: integer (iteration).
 * Return: the natural square root of n (Success)
 */
int square_root(int n, int i)
{
int s;

s = i * i;

if (s > n)
{
return (-1);
}

if (s == n)
{
return (i);
}

return (square_root(n, i + 1));
}
