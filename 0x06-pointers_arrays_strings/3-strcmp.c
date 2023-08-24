#include "main.h"

/**
 * _strcmp - compares two strings.
 *
 *@s1: pointer to a char.
 *@s2: pointer to a char.
 * Return: returns an integer (Success)
 */
int _strcmp(char *s1, char *s2)
{
int i, j;

for (i = 0; s1[i] != '\0'; i++)
{
for (j = 0; s2[j] != '\0'; j++)
{
if (s1[i] == s2[j])
{
return (0);
}
else if (s1[i] < s2[j])
{
return (-15);
}
else if (s1[i] > s2[j])
{
return (15);
}
}
}
return (0);
}
