#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at an index
 * @head: double pointer head
 * @idx: number of the index to put the new node
 * @n: value of the node (data)
 * Return: return 0
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *scan;
	unsigned int i;

	if (!head)
	{
		return (0);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	scan = *head;
	new->n = n;
	new->next = 0;

	if (scan == NULL && idx == 0)
	{
		new->next = scan;
		scan = new;
		return (0);
	}

	for (i = 0; scan != NULL && i <= idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = scan->next;
			scan->next = new;
		}
		else
		{
			scan = scan->next;
		}
	}
	return (scan);
}
