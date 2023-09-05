#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - returns a pointer to a newly allocated space in
 *memory, which contains a copy of the string given as a parameter.
 *
 *@str: pointer to a char.
 * Return: NULL if str = NULL
 *a pointer to the duplicated string (Success)
 *NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
unsigned int i, j;
char *array;
i = 1;

if (str == NULL)
{
return (NULL);
}

while (str[i] != '\0')
{
i++;
}

array = malloc((sizeof(char) * i) +1);

if (array == NULL)
{
return (NULL);
}

for (j = 0; j < i; j++)
{
array[j] = str[j];
}
array[j] = '\0';

return (array);
}
