#include "main.h"
#include <stdio.h>

/**
 * main - print the number of arguments passed into it.
 *
 *@argc: number of arguments (integer).
 *@argv: array of size argc (array of characters).
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
