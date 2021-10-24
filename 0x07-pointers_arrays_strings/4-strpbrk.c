#include <string.h>
#include "main.h"

/**
 * _strpbrk - return the first caracter pointed by the first common
 * caracter of the substring
 * @s: char
 * @accept: char
 *
 * Return: 0
*/

char *_strpbrk(char *s, char *accept)

{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
