#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: Always 0
 */

void puts_half(char *str)
{
	int a;
	int n, count = 0;

	for (a = 0 ; str[a] != '\0' ; a++)
		count++;
	n = (count - 1) / 2;
	for  (a = n + 1 ; str[a] != '\0' ; a++)
		_putchar(str[a]);
	_putchar('\n');
}
