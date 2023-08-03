#include "main.h"

/**
 * is_palindrome - it checks if a string is a palindrome
 * @s: input
 * Return: retrun 1 if it is palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (calculate_palindrome(s, strlen_recursion(s)));
}

/**
 * strlen_recursion - checks the string
 * @s: string
 * Return: the length of the string
 */

int strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strlen_recursion(s + 1));
}
