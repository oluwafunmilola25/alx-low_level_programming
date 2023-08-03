#include "main.h"

/**
 * is_palindrome - it checks if a string is a palindrome
 * @s: input
 * Return: retrun 1 if it is palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int a = 0;
	char *b = s;
	char *c = s;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	c = (s - 1);
	while (b < c)
	{
		if (*b != *c)
		{
			return (0);
		}
		b++;
		c--;
	}
	return (1);
}
