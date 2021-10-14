#include "main.h"
#include <string.h>

/**
 * leet  - change all first word lowercase to uppercase
 *
 * @s: points a variable of type char
 * Return: true or false
 */
char *leet(char *s)
{
	int i;
	int x = strlen(s);
	int y;
	char letter[] = "aAeEoOtTlL";
	char number[] = "4433007711";

	for (i = 0; i < x; i++)
	{
		for (y = 0; y <= letter[y]; y++)
		{
			if (s[i] == letter[y])
			{
				s[i] = number[y];
			}
		}
	}
	return (s);
}
