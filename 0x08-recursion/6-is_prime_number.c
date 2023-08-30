#include "main.h"

int check_if_prime(int n, int i);
/**
 * is_prime_number -  returns 1 if the input integer is a prime number
 * otherwise return 0
 *
 *@n: integer.
 * Return: integer (Success)
 */
int is_prime_number(int n)
{
return (check_if_prime(n, 1));
}

/**
 * check_if_prime - check if number is prime.
 *
 *@n: integer.
 *@i: integer (iteration).
 * Return: 1 if the input integer is a prime number,
 *otherwise return 0 (Success)
 */
int check_if_prime(int n, int i)
{
if (n <= 1)
{
return (0);
}

if (n % i == 0 && i > 1)
{
return (0);
}

if ((n / i) < i)
{
return (1);
}

return (check_if_prime(n, i + 1));
}
