#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @s: string pointer
 * Return: Always 0
 */

char *rot13(char *s)
{
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int a;
	int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (s[a] == data1[b])
			{
				s[a] = datarot[b];
				break;
			}
		}
	}
	return (s);
}
