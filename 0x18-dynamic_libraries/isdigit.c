#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 *
 *@c: char
 * Return: 1 if c is a digit and 0 otherwise (Success)
 */
int _isdigit(char c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
