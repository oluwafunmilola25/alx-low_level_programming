#include <stdio.h>
#include "main.h"

/**
 * new_sqrt_recursion - returns natural square root of a number
 * @n: parameter 1
 * @base: parameter 2
 * Return: 0 on success
 */

int new_sqrt_recursion(int n, int base)
{
	if (base * base > n)
	{
		return (-1);
	}
	if (base * base == n)
	{
		return (base);
	}
	return (new_sqrt_recursion(n, base + 1));
}

/**
 * _sqrt_recursion - returns natural square root
 * @n: parameter 1
 * Return: 0 on success
 */

int _sqrt_recursion(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	return (new_sqrt_recursion(n, 1));
}
