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
