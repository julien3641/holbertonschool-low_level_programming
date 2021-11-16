#include "lists.h"

/**
 * sum_listint - return the sum of all the data of n
 * @head: head
 * Return: return sum
 */

int sum_listint(listint_t *head)
{
	unsigned int sum = 0;
	listint_t *tmp;

	if (!head)
		return (0);
	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
