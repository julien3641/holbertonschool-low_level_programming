#include "main.h"

/**
 * *_strncat - function concatenates two sting that il will use at most n bytes
 * @dest: string that receives a copy of variable src string
 * @src: string copy in the variable dest string
 * @n: n
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, k;

	for(i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for(k = 0; k < n && src[k] != '\0'; k++)
	{
		dest[i] = src[k];
		i = i + 1;
	}
	dest[i + n + 1] = '\0';
	return (dest);
}
