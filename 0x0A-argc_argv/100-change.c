#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 *@argc: number of arguments (integer).
 *@argv: array of size argc (array of characters).
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
int sum, coins = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
sum = atoi(*(argv + 1));
while (sum >= 25)
{
sum -= 25;
coins++;
}
while (sum >= 10)
{
sum -= 10;
coins++;
}
while (sum >= 5)
{
sum -= 5;
coins++;
}
while (sum >= 2)
{
sum -= 2;
coins++;
}
while (sum >= 1)
{
sum--;
coins++;
}
printf("%d\n", coins);
return (0);
}
