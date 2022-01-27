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
	hash_node_t *new_node;
	char *dup_key = strdup(key), *dup_value = strdup(value);

	if (key == NULL || strcmp(key, "") == 0)
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
		new_node->key = dup_key;
		new_node->value = dup_value;
		ht->array[idx] = new_node;
		return (1);
	}
	else if (strcmp(ht->array[idx]->key, dup_key) == 0)
	{
		ht->array[idx]->value = dup_value;
		return (1);
	}
	else if (strcmp(ht->array[idx]->key, dup_key) != 0)
	{
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
		{
			free(new_node);
			free(dup_key);
			return (0);
		}
		new_node->key = dup_key;
		new_node->value = dup_value;
		new_node->next = ht->array[idx];
		ht->array[idx] = new_node;
	}
	return (1);
}
