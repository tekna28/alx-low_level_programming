#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: no return (Success)
 */
void times_table(void)
{
int r, c, result;
for (r = 0; r <= 9; r++)
{
_putchar('0');
for (c = 1; c <= 9; c++)
{
_putchar(',');
_putchar(' ');

result = r * c;

if (result <= 9)
{
_putchar(' ');
}
else if (result >= 10)
{
_putchar((result / 10) + '0');
}

_putchar((result % 10) + '0');
}
_putchar('\n');
}
}
