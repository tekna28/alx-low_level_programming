#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int count, one, two, next;

count = 3;
one = 1;
two = 2;

printf("%lu, ", one);
printf("%lu, ", two);
next = one + two;

while (count <= 50)
{
if (count == 50)
{
printf("%lu, \n", next);
}
else
{
printf("%lu, ", next);
}

one = two;
two = next;
next = one + two;

count++;
}
return (0);
}
