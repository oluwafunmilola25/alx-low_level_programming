#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * new_palindrome - checks for palindrome
 * @start: checks the begginning of the string
 * @end: checks the end of the string
 * @s: string pointing to a character value
 * Return: 1 or 0 on success
 */

int new_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] == s[end])
	{
		return (new_palindrome(s, start + 1, end - 1));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - checks for a palindrome
 * @s: string pointing to a character value
 * Return: 1 or 0 on success
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	return (new_palindrome(s, 0, length - 1));
}
