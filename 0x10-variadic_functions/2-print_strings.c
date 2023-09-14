#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line.
 *
 *@separator: pointer to an invariable char.
 *@n: invariable unsigned integer.
 * Return: no return (Success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list parameters;
unsigned int i;
char *temp;

va_start(parameters, n);

for (i = 0; i < n; i++)
{
temp = va_arg(parameters, char*);
printf("%s", (temp != NULL) ? temp : "(nil)");

if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(parameters);
}
