#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 *
 *@c: the character to check if it is lowercase
 * Return: 1 if c is a letter, lowercase
 *or uppercase 0 otherwise (Success)
 */
int _isalpha(char c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
