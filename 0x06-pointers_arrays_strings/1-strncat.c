#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate using strcat
 *
 * @dest: destination
 * @src: src
 * @n: Size_t
 * Return: concatenate
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
