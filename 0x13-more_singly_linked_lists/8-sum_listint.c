#include "lists.h"

/**
 * sum_listint - retuns the sum of all the data of a listint linked list
 * @head: a pointer to the first node
 * Return: 0 if the list is NULL
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
