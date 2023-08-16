#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: no return (Success)
 */
void times_table(void)
{
int a, b, c, d, n;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
c = a * b;
if (c > 0)
{
d = c % 10;
n = (c - d) / 10;
_putchar(',');
_putchar(' ');
_putchar(n + '0');
_putchar(d + '0');
}
else
{
if (b != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar(c + '0');
}
}
_putchar('\n');
}
}
