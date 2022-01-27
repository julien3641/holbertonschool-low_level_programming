#include "hash_tables.h"

/**
 * key_index - function that five the index of a key
 * @key: the given key to find
 * @size: the size of the hash table
 * Return: The index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	unsigned long int index;

	index  = hash_djb2(key);
	index %= size;
	return (index);
}
