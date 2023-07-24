#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 * Return: Always 0
 */

void print_rev(char *s)
{
	int n = 0;
	int i;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	s--;
	for (i = n ; i > 0 ; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
