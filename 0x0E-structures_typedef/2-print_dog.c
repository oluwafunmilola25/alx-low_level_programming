#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the content of struct dog
 * @d: the initializer element
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nil\n");
	}
	else
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
