#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of character
 * @size: holds the number of size declared
 * @c: the character value initialized
 * Return: a pointer to an array or null if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)

		arr[i] = c;

	return (arr);
}
