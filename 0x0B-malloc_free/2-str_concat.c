#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - concatenates two strings. The returned pointer should
 *point to a newly allocated space in memory which contains the
 *contents of s1, followed by the contents of s2, and null terminated.
 *
 *@s1: pointer to a char.
 *@s2: pointer to a char.
 * Return: pointer to a char (Success)
 */
char *str_concat(char *s1, char *s2)
{
unsigned int i = 0, j = 0, k = 0, l = 0;
char *array;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i])
i++;
while (s2[j])
j++;
l = i + j;
array = malloc((sizeof(char) * l) +1);
if (array == NULL)
return (NULL);
j = 0;
while (k < l)
{
if (k <= i)
array[k] = s1[k];
if (k >= i)
{
array[k] = s2[j];
j++;
}
k++;
}
array[k] = '\0';
return (array);
}
