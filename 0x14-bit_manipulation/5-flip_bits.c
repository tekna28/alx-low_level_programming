#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another.
 *
 *@n: number to be flipped.
 *@m: number to be flipped to.
 * Return: number of bits you would need to flip
 *to get from one number to another. (Success)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int num_bits_flip = 0;
unsigned long int xor = n ^ m;

while (xor != 0)
{
if (xor & 1ul)
num_bits_flip++;

xor = xor >> 1;
}
return (num_bits_flip);
}
