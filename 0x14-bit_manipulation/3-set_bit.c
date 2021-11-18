#include "main.h"

/**
 * set_bit - set a 1 to the given index
 * @n: pointer to n
 * @index: the given number that we have to change
 * Return: return 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n = (1 << index) | *n;
	return (1);
}
