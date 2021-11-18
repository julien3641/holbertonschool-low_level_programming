#include "main.h"

/**
 * get_bit - get a bit from a given index from a number
 * @n: the given number
 * @index: the index of the bit to return
 * Return: the bit '1' or '0'
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	else
		return ((n >> index) & 1);
}
