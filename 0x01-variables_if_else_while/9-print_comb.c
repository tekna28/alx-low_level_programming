#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n1;
for (n1 = 0; n1 <= 9; n1++)
{
putchar(n1 + '0');
if (n1 != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
