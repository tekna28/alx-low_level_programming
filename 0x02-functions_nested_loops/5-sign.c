#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints the sign of a number.
 *
 *@n: to check the sign of a number.
 * Return: 1 if n is greater than zero and 0 if n is zero
 * -1 if n is less than zero (Success)
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
return (0);
}
