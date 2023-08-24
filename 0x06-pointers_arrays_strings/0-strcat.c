#include "main.h"

/**
 * _strcat - concatenates two strings.
 *
 *@dest: pointer to a char.
 *@src: pointer to a char.
 * Return: returns a pointer to a char (Success)
 */
char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
j = 0;

while (dest[i] != '\0')
{
i++;
}

while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';

return (dest);
}
