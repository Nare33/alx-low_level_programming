#include "main.h"

/**
 * prime_a - says if an integer is a prime number or not
 * @a: input
 * @b: divisor
 * Return: (0)
 */
int prime_a(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_a(a, b + 1));
}

/**
 * is_prime_number - detect if its a prime number
 * @n: input number
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
	return (prime_a(n, 2));
}
