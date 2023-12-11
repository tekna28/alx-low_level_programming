#include "main.h"

/**
 * _memset - fill a block of memory with a particular value
 *
 *@s: pointer to a char.
 *@b: character.
 *@n: unsigned integer.
 * Return: pointer to a char (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
