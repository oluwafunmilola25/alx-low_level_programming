#include "lists.h"

/**
 * add_node_end - adds new node at the end
 * @head: singly list parameter
 * @str: string
 * Return: the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *temp;
	unsigned int i, count = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	node->len = count;
	node->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node;
	}
	return (*head);
}
