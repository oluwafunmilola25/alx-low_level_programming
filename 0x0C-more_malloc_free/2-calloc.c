#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of element in the array
 * @size: size of each elements in the array
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int result;
	void *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	result = nmemb * size;

	arr = malloc(result);

	if (arr != NULL)
	{
		memset(arr, 0, result);
	}

	return (arr);
}
