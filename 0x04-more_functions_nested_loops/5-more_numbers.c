#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 *followed by a new line.
 *
 * Return: no return (Success)
 */
void more_numbers(void)
{
int num;
int i;
for (i = 0; i < 10; i++)
{
for (num = 0; num <= 14; num++)
{
if (num > 9)
{
_putchar((num / 10) + '0');
}
_putchar((num % 10) + '0');
}
_putchar('\n');
}
}
