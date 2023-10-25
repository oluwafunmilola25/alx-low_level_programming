#include "lists.h"

/**
 * print_listint_safe - prints a listint linked list
 * @head: a pointer to the first node
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	const listint_t *data = head;
	const listint_t *num = head;

	while (data != NULL)
	{
		printf("[%p] %d\n", (void *)data, data->n);
		node++;
		if (num && num->next)
		{
			num = num->next->next;
		}
		else
		{
			num = NULL;
		}
		if (num == data)
		{
			printf("->[%p] %d\n", (void *)num, num->n);
			break;
		}
		data = data->next;
	}
	return (node);
}
