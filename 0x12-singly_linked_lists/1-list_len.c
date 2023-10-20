#include "lists.h"

/**
 * list_len - returns the number of elememts
 * @h: parameter for singly list
 * Return: the number of element
 */

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
