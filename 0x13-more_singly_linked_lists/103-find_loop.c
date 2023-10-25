#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the first node
 * Return: addrss of node the loop starts from
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp = head;
	listint_t *data = head;

	while (temp && data && data->next)
	{
		data = data->next->next;
		temp = temp->next;

		if (data == temp)
		{
			temp = head;
			while (temp != data)
			{
				temp = temp->next;
				data = data->next;
			}
			return (data);
		}
	}
	return (NULL);
}
