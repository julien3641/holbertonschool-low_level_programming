#include "main.h"
#include <stdlib.h>


int _strlen(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);


/**
 * _realloc - reallocation of memory in new size
 * @ptr: pointeur
 * @old_size: first size
 * @new_size: last size
 * Return: nptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	void *nptr;

	ptr = malloc(old_size);
	if (new_size == old_size)
		return (ptr);
	if (ptr == 0)
		ptr = malloc(new_size);
	if (new_size == 0 && ptr != NULL)
		return (NULL); /* is equivalent to free(ptr)*/
	nptr = malloc(new_size);
	_memcpy(nptr, ptr, _strlen(ptr));
	free(ptr);
	return (nptr);
}

/**
 * _strlen - count the number of caracter in recursion
* @s: s
* Return: 0
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _memcpy - this function copy a string of bite in the memory
 * @dest: char
 * @src: char
 * @n: unsigned int
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = *src++;
	}
	return (dest);
}
