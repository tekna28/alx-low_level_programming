#include "main.h"
#include <limits.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
print_last_digit(98);
print_last_digit(0);
print_last_digit(-1024);
print_last_digit(INT_MAX);
print_last_digit(INT_MIN);
print_last_digit(1);
_putchar('\n');
return (0);
}
