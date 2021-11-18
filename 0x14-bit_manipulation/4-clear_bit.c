#include "main.h"

/**
 * clear_bit - clear the bit at the given index
 * @n: the number given
 * @index: bit to change
 * Return: Return 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == 0 || index >= 64)
		return (-1);
	*n = *n & (~(1 << index));
	return (1);
}
