#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an array
 * @array: contains the elements
 * @size: the number of elements in the array
 * @cmp: for comparing values, a pointer to function
 * Return: an integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
