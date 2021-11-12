#include "lists.h"

/**
 * list_len - count the number of elements of the list
 * @h: pointer to the stucture
 * Return: Return the number for elements of the list
 */

size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
