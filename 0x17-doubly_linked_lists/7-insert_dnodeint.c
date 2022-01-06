#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at an index
 * @h: pointer to the first node
 * @idx: index to add the new node
 * @n: data of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp = *h;
	unsigned int i = 0;

	new_node  = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (0);
	}
	if (h == NULL && idx == 0)
		return (0);
	while (i < idx-1 && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	new_node->n = n;
	new_node->next = tmp->next;
	new_node->prev = tmp;
	if (tmp->next != NULL)
		tmp->next->prev = new_node;
	tmp->next = new_node;
	return (new_node);
}
