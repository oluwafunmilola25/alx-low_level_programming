#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept: input
 * Return: numbers of characters
 */

unsigned int _strspn(char *s, char *accept)
{
	int b;
	int d;

	for (b = 0; s[b] != '\0'; b++)
	{
		for (d = 0; s[b] != accept[d]; d++)
		{
			if (accept[d] == '\0')
				return (b);
		}
	}
	return (0);
}
