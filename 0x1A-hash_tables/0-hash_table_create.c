#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * hash_table_create - Write a function that creates a hash table
 * @size: size of the array
 * Return: Return NULL if something went wrong or the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable = malloc(sizeof(hash_table_t));

	if (htable == NULL)
	{
		return (NULL);
	}
	htable->size = size;

	htable->array = malloc(size * sizeof(hash_node_t *));
	if (htable->array == NULL)
	{
		free(htable);
		return (NULL);
	}
	return (htable);
}
