#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 *@s: pointer to a char.
 *@accept: pointer to a char.
 * Return: unsigned integer (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, n, k;
k = 0;

for (i = 0; s[i] != '\0'; i++)
{
n = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (accept[j] == s[i])
{
k++;
n = 1;
}
}
if (n == 0)
{
return (k);
}
}
return (k);
}
