#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int count, one, two, next;

count = 3;
one = 1;
two = 2;

printf("%d, ", one);
printf("%d, ", two);
next = one + two;

while (count <= 50)
{
if (count == 50)
{
printf("%d, \n", next);
}
else
{
printf("%d, ", next);
}

one = two;
two = next;
next = one + two;

count++;
}
return (0);
}
