#include "main.h"

/**
 * get_endianness - checks endianness
 * Return: 0 if big endian and 1 if little endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *j = (char *)&i;

	return (*j);
}
