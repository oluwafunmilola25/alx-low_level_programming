#include "lists.h"

/**
 * free_listint2 - frees a listint list
 * @head: a pointer to the first node in a singly list
 * Return: success
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
