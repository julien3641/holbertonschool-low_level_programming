#include "lists.h"

/**
 * dlistint_len - function that print a elements of a dlistint_t list
 * @h: pointer on node
 * Return: Return the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h)
		while (h)
		{
			h = h->next;
			i++;
		}
	return (i);
}

/**
 * delete_dnodeint_at_index - delete a node at index
 * @head: pointer to the first node
 * @index: index to the node to be deleted
 * Return: 1 if succeeded or -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t len;
	unsigned int i;
	dlistint_t *tmp, *del;

	len = dlistint_len(*head);
	if (index > len)
		return (-1);
	if (*head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
		*head = (*head)->next;
	for (i = 1; tmp != NULL && i < index - 1; i++)
		tmp = tmp->next;
	if (tmp != NULL && tmp->next != NULL)
	{
		del = tmp->next;
		tmp->next = tmp->next->next;
		if (tmp->next->next != NULL)
			tmp->next->next->prev = tmp ->next;
		free(del);
	}
	return (1);
}
