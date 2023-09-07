#include "main.h"
#include <stdio.h>
#include <string.h>
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
int i;
unsigned int j;
int sum = 0;
char *n;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
n = argv[i];
for (j = 0; j < strlen(n); j++)
{
if (n[j] < 48 || n[j] > 57)
{
printf("Error\n");
return (1);
}
}
sum += atoi(n);
n++;
}
printf("%d\n", sum);
}
else
{
printf("0\n");
}
return (0);
}
