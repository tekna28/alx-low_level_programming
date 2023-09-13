#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - returns the sum of a and b. 
 *
 *@a: integer.
 *@b: integer.
 * Return: result of addition (Success)
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - returns the difference of a and b.
 *
 *@a: integer.
 *@b: integer.
 * Return: result of substraction (Success)
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - returns the product of a and b.
 *
 *@a: integer.
 *@b: integer.
 * Return: result of multiplication (Success)
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - returns the result of the division of a by b.
 *
 *@a: integer.
 *@b: integer.
 * Return: result of division (Success)
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
}
return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b.
 *
 *@a: integer.
 *b: integer.
 * Return: result of remainder of the division (Success)
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
}
return (a % b);
}
