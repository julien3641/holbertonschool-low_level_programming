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
 * add_node - add a new node at the beginning of a list
 * @head: double pointer
 * @str: pointer to a list
 * Return: The address of the new element of NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = (malloc(sizeof(list_t)));
	if (new == NULL)
	{
		free(new);
		return(NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
