#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase character.
 *@c: the character to check if it is lowercase
 * Return: 1 if c is lowercase or 0 otherwise (Success)
 */
int _islower(char c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
