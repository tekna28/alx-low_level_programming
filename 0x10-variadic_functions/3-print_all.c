#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all -  prints anything.
 *
 *@format: pointer to an invariable character.
 * Return: no return (Success)
 */
void print_all(const char * const format, ...)
{
va_list parameters;
char *temp;
int i = 0, o;

while (format && format[i])
{
va_start(parameters, format);
while (format[i])
{
o = 1;
switch (format[i++])
{
case 'c':
printf("%c", va_arg(parameters, int));
break;
case 'i':
printf("%d", va_arg(parameters, int));
break;
case 'f':
printf("%f", va_arg(parameters, double));
break;
case 's':
temp = va_arg(parameters, char*);
if (temp)
{
printf("%s", temp);
break;
}
printf("(nil)");
break;
default:
o = 0;
break;
}
if (format[i] && o)
printf(", ");
}
va_end(parameters);
}
printf("\n");
}
