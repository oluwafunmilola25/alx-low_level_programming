#include "lists.h"

/**
 * print_listint_safe - prints a listint linked list
 * @head: a pointer to the first node
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	long int data;

	while (head != NULL)
	{
		data = head - head->next;
		node++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (data > 0)
			head = head->next;
		else
		{
			printf("->[%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (node);
}
