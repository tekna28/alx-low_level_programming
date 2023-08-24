#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 *@a: pointer to a char.
 * Return: returns a pointer to a char (Success)
 */
char *cap_string(char *a)
{
int i;

for(i = 0; a[i] != '\0'; i++)
{
if (i == 0)
{
if (a[i] >= 'a' && a[i] <= 'z')
a[i] = a[i] - 32;
continue;
}
if (a[i - 1] == ' ' || a[i - 1] == '\t' || a[i - 1] == '\n' || a[i - 1] == ',' ||
a[i - 1] == ';' || a[i - 1] == '.' || a[i - 1] == '!' || a[i - 1] == '?' ||
a[i - 1] == '"' || a[i - 1] == '(' || a[i - 1] == ')' || a[i - 1] == '{' ||
a[i - 1] == '}' || i == 0)
{
if (a[i] >= 'a' && a[i] <= 'z')
{
a[i] = a[i] - 32;
continue;
}
}
}
return (a);
}
