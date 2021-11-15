#include "lists.h"

/**
 * add_nodeint_end - add a new list at the end
 * @head: head pointer
 * @n: data of the list
 * Return: return list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = new;
		return (last);
	}
}
