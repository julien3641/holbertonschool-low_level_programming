#include "main.h"
#include "stdlib.h"

/**
 * create_array - create an array of chars
 * @size: size
 * @c: c
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *ar;

	if (size == 0)
	{
		return ('\0');
	}
	ar = malloc(size * sizeof(char));
	if (ar == 0)
	{
		return (0);
	}
	for (n = 0; n < size; n++)
		ar[n] = c;
	return (ar);
}
