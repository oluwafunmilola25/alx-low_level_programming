#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - copies and duplicates a string given as a parameter
 * @str: string parameter
 * Return: the duplicated string
 */

char *_strdup(char *str)
{
	char *new_str;
	int i;
	int count = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		count++;

	new_str = malloc(sizeof(char) * count + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}

	strcpy(new_str, str);

	return (new_str);
}
