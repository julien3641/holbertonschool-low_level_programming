#include "main.h"
#include <string.h>

/**
 * rot13  - change all first word lowercase to uppercase
 *
 * @s: points a variable of type char
 * Return: true or false
 */
char *rot13(char *s)
{
	int i;
	int x = strlen(s);
	int y;
	char letter[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; i < x; i++)
	{
		for (y = 0; y < 52; y++)
		{
			if (s[i] == letter[y])
			{
				s[i] = rot13[y];
				break;
			}
		}
	}
	return (s);
}
