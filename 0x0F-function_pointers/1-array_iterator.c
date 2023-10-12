#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: a pointer to an int containing the elements
 * @size: the size of the array
 * @action: a pointer to the function needed for use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i; /*declare i for iterating over array*/

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
