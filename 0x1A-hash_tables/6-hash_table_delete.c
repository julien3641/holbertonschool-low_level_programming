#include "hash_tables.h"

/**
 * hash_table_delete - function that free all the memory allocated
 * @ht: the hash table
 */


void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i = 0;

	while (i <= ht->size)
	{
		while (ht->array[i])
		{
			tmp = ht->array[i];
			ht->array[i] = ht->array[i]->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
		free(ht->array[i]);
		i++;
	}
	free(ht->array);
	free(ht);
}
