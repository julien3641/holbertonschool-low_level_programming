#include "lists.h"

/**
 * get_dnodeint_at_index - get the node at the index
 * @head: pointer to the first node
 * @index: index where to find the node
 * Return: NULL if doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}
	return (current);
}
