#include "main.h"
#include <stdlib.h>

/**
 * _memset - fil memory with a constant bite
 *
 * @s: char
 * @b: char
 * @n: unsigned int
 * Return: 0
*/

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (0);
}

/**
 * _calloc - free the memory and realloc the memory
 * @nmemb: nmemb
 * @size: size
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *ptr;

	if (nmemb == 0 && size == 0)
		return (0);
	i = nmemb * size;
	ptr = malloc(i);
	if (ptr == 0)
	{
		return (0);
	}
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
