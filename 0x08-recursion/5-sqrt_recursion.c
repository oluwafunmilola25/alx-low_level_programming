#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number for natural square root number
 * Return: return -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}

/**
 *actual_sqrt_recursion - returns natural square root
 * @n: number for natural root
 * @h: input
 * Return: return the result
 */

int actual_sqrt_recursion(int n, int h)
{
	if (h * h > n)
		return (-1);
	if (h * h == n)
		return (h);
	return (actual_sqrt_recursion(n, h + 1));
}
