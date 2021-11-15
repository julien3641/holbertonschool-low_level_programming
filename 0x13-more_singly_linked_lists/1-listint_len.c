#include "lists.h"

/**
 * listint_len - return the number of elements in the list
 * @h: h
 * Return: 0
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
