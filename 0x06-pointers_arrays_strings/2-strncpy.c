#include "main.h"
#include <string.h>

/**
 * _strncpy - copy using strcpy
 *
 * @dest: destination
 * @src: src
 * @n: Size_t
 * Return: copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
