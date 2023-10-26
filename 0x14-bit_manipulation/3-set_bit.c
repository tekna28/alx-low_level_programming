#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 *
 *@n: pointer to unsigned long int.
 *@index: index of the bit you want to set.
 * Return: 1 if it worked (Success)
 * or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int num = 1;

if (index > (sizeof(unsigned long int) * 8))
return (-1);

num = num << index;

*n = *n | num;
return (1);
}
