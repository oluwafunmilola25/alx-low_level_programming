#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free the space of unused dog
 * @d: the initializer
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);

	d = NULL;
}
