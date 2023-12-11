#include "main.h"

/**
 * _strncpy - copies a string.
 *
 *@dest: pointer to a char.
 *@src: pointer to a char.
 *@n: integer.
 * Return: returns pointer to a char (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

i = 0;

while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}

while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
