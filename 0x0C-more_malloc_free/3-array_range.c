#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create an array of integer
 * @min: minimum parameter
 * @max: maximum parameter
 * Return: a pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int result;
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	result = max - min + 1;

	arr = malloc(sizeof(int) * result);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < result; i++)
		arr[i] = min + i;

	return (arr);
}
