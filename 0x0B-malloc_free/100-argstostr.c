#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 *
 *@ac: integer.
 *@av: pointer to a pointer to a char.
 * Return: pointer to a char (Success)
 */
char *argstostr(int ac, char **av)
{
char *str;
int l = 0, i = 0, j, k = 0;
if (ac == 0 || av == NULL)
return (NULL);
while (i < ac)
{
j = 0;
while (av[i][j] != 0)
{
l++;
j++;
}
l++;
i++;
}
l++;
str = (char *)malloc((sizeof(char) * l));
i = 0;
if (str == NULL)
{
free(str);
return (0);
}
i = 0;
while (i < ac)
{
j = 0;
while (av[i][j] != 0)
{
str[k] = av[i][j];
j++;
k++;
}
str[k] = '\n';
k++;
i++;
}
str[k] = 0;
return (str);
}
