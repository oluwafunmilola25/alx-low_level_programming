#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: Always 0
 */

int _atoi(char *s)
{
	int a, b, n, len, i, digit;

	a = 0;
	b = 0;
	n = 0;
	len = 0;
	i = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && i == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			n = n * 10 + digit;
			i = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			i = 0;
		}
		a++;
	}
	if (i == 0)
		return (0);

	return (n);
}
