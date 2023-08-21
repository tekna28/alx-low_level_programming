#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverses a string.
 *
 *@s: pointer to a char.
 * Return: no return (Success)
 */
void rev_string(char *s)
{
int i, j, len;
char temp;

len = _strlen(s);

for (i = 0, j = len - 1; i < j; i++, j--)
{
temp = *(s + i);
*(s + i) = *(s + j);
*(s + j) = temp;
}
}
