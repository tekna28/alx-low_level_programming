#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - concatenates two strings.
 *
 *@s1: pointer to a char.
 *@s2: pointer to a char.
 *@n: unsigned integer.
 * Return: pointer to a char (Success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, l1 = 0, l2 = 0;
char *str;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (*(s1 + l1) != '\0')
l1++;
while (*(s2 + l2) != '\0')
l2++;
if (n >= l2)
n = l2;
str = malloc(sizeof(char) * (l1 + n + 1));
if (str == NULL)
return (NULL);
for (i = 0; i < l1; i++)
str[i] = s1[i];
for (j = 0; j < n; i++, j++)
str[i] = s2[j];
str[i] = '\0';
return (str);
}
