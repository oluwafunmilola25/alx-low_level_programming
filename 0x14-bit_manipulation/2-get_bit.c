#include "main.h"

/**
 * get_bit - returns the value of a bit of a given index
 * @n: number
 * @index: index starting from 0
 * Return: value of the a bit at an index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count;

	if (n == 0)
	{
		return (0);
	}
	if (index > 63)
		return (-1);
	count = (n >> index) & 1;

	return (count);
}
