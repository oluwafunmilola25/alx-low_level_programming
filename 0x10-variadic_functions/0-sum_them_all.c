#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all parameter
 * @n: retrieve an argument
 * Return: sum of an arguement
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list add;

	if (n == 0)
	{
		return (0);
	}

	va_start(add, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(add, int);
	}
	va_end(add);
	return (sum);
}
