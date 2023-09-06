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
char *a, *b;

for (; *haystack != '\0'; haystack++)
{
a = haystack;
b = needle;
while (*a == *b && *b != '\0')
{
a++;
b++;
}

if (*b == '\0')
{
return (haystack);
}
}
return (NULL);
}
