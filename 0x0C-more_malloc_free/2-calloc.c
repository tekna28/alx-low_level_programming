#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 *
 *@nmemb: unsigned integer.
 *@size: unsigned integer.
 * Return: a pointer to the allocated memory (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *str;

if (nmemb == 0 || size == 0)
return (NULL);

str = malloc(size * nmemb);

if (str == NULL)
return (NULL);

for (i = 0; i < size * nmemb; i++)
str[i] = 0;
return ((void *)str);
}
