#include "main.h"
#include <stddef.h>

/**
 * _strstr -  locates a substring.
 *
 *@haystack: pointer to a char.
 *@needle: pointer to a char.
 * Return: a pointer to a char (Success)
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (needle[j] == haystack[i])
{
return (needle);
}
}
}
return (NULL);
}
