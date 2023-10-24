#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint list
 * @head: a pointer to the first node
 * @index: the index of the node
 * Return: nth of a listint
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;


	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}
	return (NULL);
}
