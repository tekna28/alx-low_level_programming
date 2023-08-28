#include "main.h"

/**
 * _strchr - locates a character in a string.
 *
 *@s: pointer to a char.
 *@c: character.
 * Return: a pointer to a char (Success)
 */
char *_strchr(char *s, char c)
{
char *p;
int i = 0;

p = s;
while (*s != c)
{
s++;
i++;
}

if (*s == c)
{
return (p + i);
}
return (0);
}
