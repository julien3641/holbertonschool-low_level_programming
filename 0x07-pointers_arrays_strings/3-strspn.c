#include "main.h"

/**
 * _strspn - return a constent byte
 *
 * @s: char
 * @accept: char
 *
 * Return: 0
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int sum = 0;
	unsigned int i, k;
	for (i = 0; s[i] != 32; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				sum = sum + 1;
			}
		}
	}
	return (sum);
}
