#include "lists.h"

/**
 * free_listint2 - free the memory of the previous list
 * @head: head
 * Return: return 0
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
	free(*head);
	*head = NULL;
}
