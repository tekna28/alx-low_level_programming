#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 *
 *@separator: invariable pointer to a character.
 *@n: invariable unsigned integer.
 * Return: no return (Success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list parameters;
unsigned int i;

va_start(parameters, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(parameters, int));

if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(parameters);
}
