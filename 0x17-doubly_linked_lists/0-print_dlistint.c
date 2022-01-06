#include "lists.h"

/**
 * print_dlistint - function that print a elements of a dlistint_t list
 * @h: pointer on node
 * Return: Return the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i;

	if (h)
		for (i = 0; h; i++)
		{
			printf("%d\n", h->n);
			h = h->next;
		}
	return (i);
}
