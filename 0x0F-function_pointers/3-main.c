#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 *@argc: number of parameters.
 *@argv: array of parameters.
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
if (!get_op_func(argv[2]))
{
printf("Error\n");
exit(99);
}
if (argc != 4)
{
printf("Error\n");
exit(98);
}
else if (argc == 4)
{
printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
}
return (0);
}
