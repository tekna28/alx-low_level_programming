#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n1 = 0;
int n2;
while (n1 < 99)
{
n2 = n1 + 1;
while (n2 < 99)
{
putchar(n1);
putchar(n2);
if (n1 != 8 && n2 != 9)
{
putchar(',');
putchar(' ');
}
n2++;
}
n1++;
}
putchar('\n');
return (0);
}
