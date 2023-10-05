#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional arrays of integers
 * @width: rows of a two Dimensional array
 * @height: column of a two Dimensional array
 * Return: a pointer to an array of two D
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **result;

	if (width <= 0 || height <= 0)
		return (NULL);

	result = malloc(height * sizeof(int *));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		result[i] = malloc(width * sizeof(int));
		if (result[i] == NULL)
		{
			free(result);
			for (j = 0; j <= height; j++)
			{
				free(result[j]);
			}
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			result[i][j] = 0;
		}
	}
	return (result);
}
