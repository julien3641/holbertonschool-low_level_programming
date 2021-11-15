#include "lists.h"

/**
 * pop_listint - deletes a head node
 * @head: double pointer
 * Return: return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	else
	{
		tmp = *head;
		n = (*head)->n;
		*head = (*head)->next;
		free(tmp);
	}
	return (n);
}
