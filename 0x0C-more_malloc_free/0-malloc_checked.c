#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: b
 * Return: 98
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == 0)
	{
		exit(98);
	}
	return (ptr);
}
