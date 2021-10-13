#include "main.h"
#include <string.h>

/**
 *  string_toupper - change all lowercase to uppercase
 *
 * @str: points a variable of type char
 * Return: true or false
 */
char *string_toupper(char *str)
{
	int i;
	int x = strlen(str);

	for (i = 0; i < x; i++)
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] = str[i] - 32;
		}
	return (str);
}
