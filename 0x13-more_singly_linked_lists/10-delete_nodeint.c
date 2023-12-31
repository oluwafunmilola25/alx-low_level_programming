#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint list
 * @head: a pointer to the first node
 * @index: index of the node to be deleted
 * Return: 1 for success or -1 for fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *perm = NULL;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (count < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		count++;
	}

	perm = temp->next;
	temp->next = perm->next;
	free(perm);

	return (1);
}

