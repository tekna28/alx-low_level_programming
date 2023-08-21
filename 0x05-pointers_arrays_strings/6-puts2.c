#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - prints every other character of a string, starting with the
 *first character, followed by a new line.
 *
 *@str: pointer to a char.
 * Return: no return (Success)
 */
void puts2(char *str)
{
int i, len;

len = _strlen(str);

for (i = 0; i < len; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
