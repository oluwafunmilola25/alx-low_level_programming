#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint list
 * @head: the pointer to the first node in the list
 * Return: the head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);
	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
