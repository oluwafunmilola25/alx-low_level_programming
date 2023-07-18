#include "main.h"

/**
 * print_alphabet_x10 - make alphabet x10 times in lowercase
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char x;
	int a;

	x = 0;
	while (a < 10)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
		a++;
	}
}
