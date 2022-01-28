#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: the hash table to add
 * @key: is the key
 * @value: is the value associated with the key
 * Return: 1 if i succeeded and 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new_node, *tmp;

	if (key == NULL || strcmp(key, "") == 0 || ht == NULL)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	if (ht->array[idx] == NULL)
	{
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
		{
			free(new_node);
			return (0);
		}
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		ht->array[idx] = new_node;
		return (1);
	}
	tmp = ht->array[idx];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	if (strcmp(ht->array[idx]->key, key) != 0)
	{
		new_node = add_node(&ht->array[idx], strdup(key), strdup(value));
		if (new_node == 0)
			return (0);
	}
	return (1);
}

/**
 * add_node - function that create a new node
 * @head: hash table
 * @key: the key
 * @value: the value of the key
 * Return: 0 if fail or new_node
 */

hash_node_t *add_node(hash_node_t **head, char *key, char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(new_node);
		free(head);
		return (0);
	}
	new_node->key = key;
	new_node->value = value;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
