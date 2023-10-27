#include "main.h"

/**
 * flip_bits - returns the number of bills needed to flip
 * @n: integer
 * @m: parameter 2
 * Return: success
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int b;
	unsigned long int  j = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		b = j >> i;
		if (b & 1)
		count++;
	}
	return (count);
}
