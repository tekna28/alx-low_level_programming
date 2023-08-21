#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - copies the string pointed to by src, including the
 *terminating null byte (\0), to the buffer pointed to by dest.
 *
 *@dest: pointer to a char.
 *@src: pointer to a char.
 * Return: pointer to dest (Success)
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; i < _strlen(src); i++)
{
*(dest + i) = *(src + i);
*(dest + i) = '\0';
}
return (dest);
}
