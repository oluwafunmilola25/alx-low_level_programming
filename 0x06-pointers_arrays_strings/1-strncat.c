#include "main.h"

/**
 * _strncat - function that concatenate a strings
 * @src: source
 * @dest: destination
 * @n: number of bytes
 * Return: a pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
