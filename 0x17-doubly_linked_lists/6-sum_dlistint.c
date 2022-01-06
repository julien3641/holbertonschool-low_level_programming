#include "lists.h"

/**
 * sum_dlistint - function that sum all of the data of a linked list
 * @head: pointer to the first node
 * Return: Return 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
