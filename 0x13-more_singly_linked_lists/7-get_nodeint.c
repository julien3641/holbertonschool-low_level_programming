#include "lists.h"

/**
 * get_nodeint_at_index - get node at the index
 * @head: head
 * @index: index
 * Return: return 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current;

	current = head;
	while (current)
	{
		if (count == index)
		{
			return (current);
		}
		count++;
		current = current->next;
	}
	return (current);
}
