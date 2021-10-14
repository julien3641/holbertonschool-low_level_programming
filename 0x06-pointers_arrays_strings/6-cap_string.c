#include "main.h"
#include <string.h>

/**
 * cap_string  - change all first word lowercase to uppercase
 *
 * @str: points a variable of type char
 * Return: true or false
 */
char *cap_string(char *str)
{
	int i;
	int x = strlen(str);

	for (i = 0; i < x; i++)
	{

		if (str[i - 1] == ' ' || str[i - 1] == ',' || str[i - 1] == ';'
		    || str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?'
		    || str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')'
		    || str[i - 1] == '{' || str[i - 1] == '}' || str[i - 1] == '\t'
			|| str[i - 1] == '\n')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
	}
	return (str);
}
