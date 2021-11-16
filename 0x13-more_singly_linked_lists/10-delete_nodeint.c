#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at an index number
 * @head: head
 * @index: number of the node that we have to delete
 * Return: return 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *tmp, *new;

	new = *head;
	if (!head || !*head)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}
	while (tmp)
	{
		if (i == index)
		{
			new = tmp->next;
			tmp->next = new->next;
			free(new);
			return (1);
		}
		tmp = tmp->next;
		i++;
	}
	return (-1);
}
