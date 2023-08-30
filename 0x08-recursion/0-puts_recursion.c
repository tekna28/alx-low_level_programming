#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 *
 *@s: pointer to a char.
 * Return: no return (Success)
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}

_putchar(*s);
s++;
_puts_recursion(s);
}
