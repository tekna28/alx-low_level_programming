#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 *@b: is pointing to a string of 0 and 1 chars(binary).
 * Return: the converted number (Success)
 *or 0 if:
 *there is one or more chars in the string b that is not 0 or 1.
 *b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int convert_num = 0;

if (b == NULL)
return (0);

for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '1' && b[i] != '0')
return (0);

convert_num <<= 1;

if (b[i] == '1')
convert_num ^= 1;
}
return (convert_num);
}
