#include "main.h"

/**
 * binary_to_uint - converts binary to an unsigned integer
 * @b: a string pointing to 0 or 1 chars
 * Return: 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		i = (i << 1) + (*b - '0');

		b++;
	}
	return (i);
}
