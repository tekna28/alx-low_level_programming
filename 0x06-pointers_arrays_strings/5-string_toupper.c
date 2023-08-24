#include "main.h"
#include <ctype.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 *@a: pointer to a char.
 * Return: returns a pointer to a char (Success)
 */
char *string_toupper(char *a)
{
int i;

for (i = 0; a[i] != '\0'; i++)
{
if (a[i] >= 'a' && a[i] <= 'z')
{
a[i] = (char)toupper(a[i]);
}
}
return (a);
}
