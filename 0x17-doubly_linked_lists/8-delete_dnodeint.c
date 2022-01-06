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
	dlistint_t *tmp;

	len = dlistint_len(*head);
	if (index > len)
		return (-1);
	if (*head == NULL || head == NULL)
		return (-1);
	tmp = *head;
	for (i = 0; i < index; i++)
		tmp = tmp->next;
	if (tmp == *head)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
		    tmp->next->prev = tmp->prev;
	}
	free(tmp);
	return (1);
}
