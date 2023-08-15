#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 *@n: integer
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
int digit;
digit = n % 10;
_putchar(digit + '0');
return (0);
}
