#include "main.h"

/**
 * print_chessboard - function that prints chessboard
 * @a: arrays
 * Return: Always 0
 */

void print_chessboard(char (*a)[8])
{
	int b;
	int r;

	for (b = 0; b < 8; b++)
	{
		for (r = 0; r < 8; r++)
			_putchar(a[b][r]);
		_putchar('\n');
	}
}
