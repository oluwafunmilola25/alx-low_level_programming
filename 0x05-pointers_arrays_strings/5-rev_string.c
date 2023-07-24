#include "main.h"

/**
 * rev_string - function that reverse a string
 * @s: string
 * Return: Always 0
 */

void rev_string(char *s)
{
	int n;
	int counter = 0;
	char rev = s[0];

	while (s[counter] != '\0')
		counter++;
	for (n = 0; n < counter; n++)
	{
		counter--;
		rev = s[n];
		s[n] = s[counter];
		s[counter] = rev;
	}
}
