#include "lists.h"

/**
 * free_listint - frees a listint list
 * @head: a pointer to the first node
 * Return: success
 */

void free_listint(listint_t *head)
{
	listint_t *temp;/*keep track of the node to e freed*/

	while (head != NULL)
	{
		temp = head;
		head = head->next;/*update head 2 d nxt node in d list*/

		free(temp);/*free temp*/
	}
}
