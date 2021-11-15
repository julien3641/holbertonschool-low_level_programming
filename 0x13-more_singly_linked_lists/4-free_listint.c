#include "lists.h"

/**
 * free_listint - free the memory of the previous list
 * @head: head
 * Return: return 0
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
