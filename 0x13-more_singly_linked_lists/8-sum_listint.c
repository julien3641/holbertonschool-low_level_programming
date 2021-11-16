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
/*put the pointer head in a temporary pointer*/
	tmp = head;
/*search the value of tmp until NULL */
	while (tmp != NULL)
	{
		/*add the value of n in sum */
		sum += tmp->n;
		/*put the pointer tmp->next into tmp*/
		tmp = tmp->next;
	}
	return (sum);
}
