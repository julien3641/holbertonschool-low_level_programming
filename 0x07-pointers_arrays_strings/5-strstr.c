#include <string.h>
#include "main.h"

/**
 * _strstr - search a caracter chain and return the rest of the string
 *
 * @haystack: char
 * @needle: char
 *
 * Return: 0
*/

char *_strstr(char *haystack, char *needle)

{
	int i;

	if (*needle == '\0')
		return (haystack);
			for (; *haystack; haystack++)
				for (i = 0; needle[i] == haystack[i];i++)
				{
					if (needle [i + 1] == '\0')
						return (haystack);
				}
			return ('\0');
}
