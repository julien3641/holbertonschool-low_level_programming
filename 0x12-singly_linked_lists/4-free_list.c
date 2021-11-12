#include "lists.h"

/**
 * free_list - Freed the memory allocate for new
 * @head: double pointer
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
	free(head);
}
