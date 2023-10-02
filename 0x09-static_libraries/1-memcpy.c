#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: destination of the pointer
 * @src: source of the pointer
 * @n: number of byte
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int d = n;
	int a;

	for (a = 0; a < d; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
