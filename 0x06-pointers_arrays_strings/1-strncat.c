#include "main.h"

/**
 * _strncat - concatenates two strings. Similar to the _strcat
 *function, except that it will use at most n bytes from src; and src
 *does not need to be null-terminated if it contains n or more bytes.
 *
 *@dest: pointer to a char.
 *@src: pointer to a char.
 *@n: integer.
 * Return: returns a pointer to a char (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = 0;
j = 0;

while (dest[i] != '\0')
{
i++;
}

while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0';

return (dest);
}
