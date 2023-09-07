#include "main.h"
#include <stdio.h>

/**
 * main - print all arguments it receives.
 *
 *@argc: number of arguments (integer).
 *@argv: array of size argc (array of characters).
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
while (argc--)
printf("%s\n", *argv++);
return (0);
}
