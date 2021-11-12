#include "lists.h"

/**
 * _strlen - longeur d'un champs
 * @s: valeur de a
 *
 * Return: Return 0
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}


/**
 * add_node_end - add a new node at the end of a list
 * @head: double pointer
 * @str: pointer to a list
 * Return: The address of the new element or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;

	new = (malloc(sizeof(list_t)));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == NULL)
		*head = new;

	last = (malloc(sizeof(list_t)));
	if (last == NULL)
	{
		free(last);
		return (NULL);
	}
	{
		last = *head
		while (last->next != NULL)
		{
			last = last->next;
		}
	}
	last->next = new;
	return (last);
}
