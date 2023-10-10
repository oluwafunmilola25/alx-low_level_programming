#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * _realloc - reallocates memory block using malloc and free
 * @ptr: a pointer to a memory
 * @old_size: the size in bytes, of the allocated space for ptr
 * @new_size: the new size in bytes of the allocated memory
 * Return: a pointer to the new pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int size;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);

	if (old_size < new_size)
	{
		size = new_size;
	}
	else
	{
		size = new_size;
	}

	memcpy(new_ptr, ptr, size);
	free(ptr);

	return (new_ptr);
}
