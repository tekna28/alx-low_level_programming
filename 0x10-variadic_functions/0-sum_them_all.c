#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 *
 *@n: invariable unsigned integer.
 * Return: sum of all its parameters (Success)
 */
int sum_them_all(const unsigned int n, ...)
{
va_list parameters;
unsigned int i, sum = 0;

if (n == 0)
{
return (0);
}

va_start(parameters, n);

for (i = 0; i < n; i++)
{
sum += va_arg(parameters, int);
}

va_end(parameters);
return (sum);
}
