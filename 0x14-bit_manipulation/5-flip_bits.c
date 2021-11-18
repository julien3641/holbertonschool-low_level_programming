#include "main.h"

/**
 * flip_bits - count the number of bits to be flipped
 * @n: n
 * @m: m
 * Return: return the number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;

	n = n ^ m;
	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}
