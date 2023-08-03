#include "main.h"

/**
 * is_prime_number - a function that print prime numbers
 * @n: number
 * Return: return 1 if the integer is a prime number or 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime_number(n, n - 1));
}

/**
 * actual_prime_number - checks if a number is a prime number
 * @n: number
 * @h: input
 * Return: return 1 if n is prime or 0 if not
 */

int actual_prime_number(int n, int h)
{
	if (h == 1)
		return (1);
	if (n % h == 0 && h > 0)
		return (0);
	return (actual_prime_number(n, h - 1));
}
