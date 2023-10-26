#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 *
 *@n: number to convert to binary.
 * Return: no return (Success)
 */
void print_binary(unsigned long int n)
{
unsigned long int cp = n;
int i = 0;

while ((cp >>= 1) > 0)
i++;

while (i >= 0)
_putchar((n >> i--) & 1 ? '1' : '0');
}
