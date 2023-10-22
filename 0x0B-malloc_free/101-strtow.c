#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_count - counts the number of string
 * @s: string to count
 * Return: number of string counted
 */

int string_count(char *s)
{
	int i;
	int len = 0;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			j = 0;
		else if (j == 0)
		{
			j = 1;
			len++;
		}
	}
	return (len);
}

/**
 * strtow - splits string into words
 * @str: string
 * Return: a pointer to an array of strings
 */

char **strtow(char *str)
{
	char **word, *temp;
	int i, k = 0, length = 0, c, d = 0, start;

	while (str[length])
	{
		length++;
	}
	c = string_count(str);
	if (c == 0)
		return (NULL);
	
	word = malloc(sizeof(char *) * (c + 1));
	if (word == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (d)
			{
				temp = malloc(sizeof(char) * (d + 1));
				if (temp == NULL)
					return (NULL);
				strncpy(temp, str + start, d);
				temp[d] = '\0';
				word[k] = temp;
				k++;
				d = 0;
			}
		}
		else if (d++ == 0)
			start = i;
	}
	word[k] = NULL;
	return (word);
}

