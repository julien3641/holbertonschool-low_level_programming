#include "lists.h"

/**
 * add_dnodeint - add a node at the beginning of a doubly link list
 * @head: pointer to the first node
 * @n: data of the node
 * Return: the address of the new element of Null if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->n = n;
	new_node->next = (*head);
	new_node->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = new_node;
	(*head) = new_node;
	return (new_node);
}
