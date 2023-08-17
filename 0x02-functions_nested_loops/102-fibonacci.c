#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int i, one, two, next;

one = 1;
two = 2;
next = one + two;

printf("%lu, %lu, ", one, two);

for (i = 3; i <= 50; i++)
{
if (i < 50)
{
printf("%lu, ", next);
}
else if (i == 50)
{
printf("%lu\n", next);
}
one = two;
two = next;
next = one + two;
}
return (0);
}
