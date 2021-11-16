#include "lists.h"

/**
 * sum_listint - return the sum of all the data of n
 * @head: head
 * Return: return sum
 */

int sum_listint(listint_t *head)
{
	unsigned int sum;
	listint_t *tmp;

	if (!head)
		return (0);
	tmp = head;
	for (sum = 0; tmp != NULL; sum++)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
