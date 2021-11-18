#include "main.h"

/**
 * _strlen - longeur d'un champs
 * @s: valeur de a
 *
 * Return: Return 0
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: a pointer to binary number as string
 * Return: return the convert number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, pow = 1;
	int len;

	if (b == NULL)
		return (0);
	len = _strlen(b);
	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '1' && b[len] != '0')
			return (0);
		{
			sum += (b[len] - '0') * pow;
			pow *= 2;
		}
	}
	return (sum);
}
