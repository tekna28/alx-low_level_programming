#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string.
 *
 *@s: pointer to a char.
 *@c: character.
 * Return: a pointer to a char (Success)
 */
char *_strchr(char *s, char c)
{

while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
/*if ch = '\0'*/
if (*s == c)
{
return (s);
}
return (NULL);
}
