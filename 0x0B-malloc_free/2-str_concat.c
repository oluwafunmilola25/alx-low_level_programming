#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates  two strings
 * @s1: string parameter 1
 * @s2: string parameter 2
 * Return: pointer to new_str
 */

char *str_concat(char *s1, char *s2)
{
	int s1len = 0;
	int s2len = 0;
	int i;
	char *new_str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;

	new_str = malloc(sizeof(char) * (s1len + s2len) + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		new_str[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		new_str[s1len + i] = s2[i];

	return (new_str);
}
