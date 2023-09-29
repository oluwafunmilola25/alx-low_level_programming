#include <stdio.h>
#include "main.h"

/**
 * new_prime - returns a prime number
 * @n: number to be checked
 * @i: divisor
 * Return: 1 or 0 on success
 */

int new_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (new_prime(n, i - 1));
}

/**
 * is_prime_number - returns a prime number
 * @n: number to be checked
 * Return: 1 or 0 on success
 */

int is_prime_number(int n)
{
	return (new_prime(n, n - 1));
}
