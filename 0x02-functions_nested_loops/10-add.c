#include <stdio.h>
#include "main.h"

/**
 * add - adds two integers and returns the result.
 *
 *@a: integer 1
 *@b: integer 2
 * Return: result of addition of two integers (Success)
 */
int add(int a, int b)
{
int n;
n = a + b;
_putchar(n + '0');
return (n);
}
