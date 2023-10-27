#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 * Return: success
 */

void print_binary(unsigned long int n)
{
	unsigned long int num;
	int i;
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	for (i = 63; i >= 0; i--)
	{
		num = n >> i;
		if (num & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
}
