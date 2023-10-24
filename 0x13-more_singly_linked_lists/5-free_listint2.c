#include "lists.h"

/**
 * free_listint2 -n frees a listint list
 * @head: a pointer to the first node in a singly list
 * Return: success
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *perm;

	while (*head != NULL)
	{
		temp = *head;
		perm = temp->next;
		free(temp);
		temp = perm;
	}
	*head = NULL;
}
