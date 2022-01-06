#include "lists.h"


/**
 * insert_dnodeint_at_index - inserts a new node at an index
 * @h: pointer to the first node
 * @idx: index to add the new node
 * @n: data of the new node
 * Return: return the address of the new node of NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp;
	unsigned int i = 0;

	if (*h == NULL)
	{
		new_node = add_dnodeint_end(h, n);
		return (new_node);
	}
	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	new_node  = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (0);
	tmp = *h;
	while (i < idx - 1)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (0);
		i++;
	}
	new_node->n = n;
	new_node->next = tmp->next;
	new_node->prev = tmp;
	tmp->next = new_node;
	if (new_node->next != NULL)
		new_node->next->prev = new_node;
	return (new_node);
}
