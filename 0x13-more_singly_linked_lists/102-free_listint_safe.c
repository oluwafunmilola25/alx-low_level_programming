#include "lists.h"

/**
 * free_listint_safe - frees a listint linked list
 * @h: the head
 * Return: size of the list freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t data;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h != NULL)
	{
		data = *h - (*h)->next;
		if (data > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			size++;
			break;
		}
	}
	*h = NULL;

	return (size);
}
