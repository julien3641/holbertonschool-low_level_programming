#include <string.h>
#include "main.h"

/**
 * _strchr - function that move the pointer to the next charactère and
 * return the rest of the string
 * @s: char
 * @c: char
 *
 * Return: 0
*/

char *_strchr(char *s, char c)

{
	int i, j = 0;

	while (s[j] != '\0')
		j++;
	for (i = 0; i <= j; i++)
	{
		if (s[i] == c)
			s = s + i;
	}
	return (s);
	return ('\0');
}
