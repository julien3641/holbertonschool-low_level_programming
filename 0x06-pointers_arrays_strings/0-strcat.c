#include "main.h"
#include <string.h>

/**
 * _strcat - concatenate using strcat
 *
 * @dest: destination
 * @src: src
 * Return: concatenate
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
