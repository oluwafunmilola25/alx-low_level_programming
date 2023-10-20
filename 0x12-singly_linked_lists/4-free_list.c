#include "lists.h"

/**
 * free_list - frees all unused list file
 * @head: singly list parameter
 * Return: freed list
 */

void free_list(list_t *head)
{
	list_t *unused;
	list_t *node;

	unused = head;

	while (unused != NULL)
	{
		node = unused->next;
		if (unused->str)
			free(unused->str);

		free(unused);

		unused = node;
	}
}
