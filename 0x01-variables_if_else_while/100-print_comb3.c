#include <stdio.h>

/**
 * main - nmain functions
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	int y;

	for (y = 0; y < 10; y++)
	{
		for (x = y + 1; x < 10; x++)
		{
			putchar(y + '0');
			putchar(x + '0');
			if (y != 8 || x != 9)
			{
				putchar(',');
				putchar(' ');
			}
			else
				putchar('\n');
		}
	}
	return (0);
}
