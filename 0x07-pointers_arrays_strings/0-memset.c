#include "main.h"

/**
 * _memset -function that fills memory with a constant byte
 * @s: the memory area
 * @b: the constant byte
 * @n: number of byte
 * Return: a pointer to the memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
