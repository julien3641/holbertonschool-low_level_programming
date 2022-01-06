#include "lists.h"

/**
 * print_dlistint - function that print a elements of a dlistint_t list
 * @h: pointer on node
 * Return: Return the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h)
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			i++;
		}
	return (i);
}
