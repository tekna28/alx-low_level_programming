#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 *@n: integer
 * Return: last digit of a number (Success)
 */
int print_last_digit(int n)
{
int digit;
digit = n % 10;
if (digit < 0)
{
digit = digit * -1;
}
_putchar(digit + '0');
return (digit);
}
