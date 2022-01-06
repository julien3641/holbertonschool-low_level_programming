#include "lists.h"

/**
 * free_dlistint - free the memory of the previous functions
 * @head: point to the first node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head->next != NULL)
	{
		tmp = head->next;
		head->next = tmp->next;
		free(tmp);
	}
	free(head);
}
