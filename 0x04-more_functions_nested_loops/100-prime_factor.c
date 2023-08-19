#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long largepf, i, num;
double square;

num = 612852475143;
square = sqrt(num);

for (i = 1; i <= square; i++)
{
if (num % i == 0)
{
largepf = num / i;
}
}
printf("%ld\n", largepf);
return (0);
}
