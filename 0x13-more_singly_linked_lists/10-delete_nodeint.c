#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at an index number
 * @head: head
 * @index: number of the node that we have to delete
 * Return: return 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *next;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (-1);
	}

	for (i = 0; i < index - 1 && tmp != NULL; i++)
	{
		tmp = tmp->next;
		if (tmp->next != NULL || tmp == NULL)
			return (-1);
	}
	next = tmp->next->next;
	free(tmp->next);
	tmp->next = next;
	return (1);
}
