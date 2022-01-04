#include "main.h"

/**
 * _atoi - Convert a string into an integer.
 * @s: The pointer to a string
 * Return: an integer
 */

int _atoi(char *s)
{
	int idx;
	unsigned int number = 0;
	int minus = 1;
	int isi = 0;

	for (idx = 0; s[idx]; idx++)
	{
		if (s[idx] == '-')
		{
			minus *= -1;
		}

		while (s[idx] >= '0' && s[idx] <= '9')
		{
			isi = 1;
			number = (number * 10) + (s[idx] - '0');
			idx++;
		}

		if (isi == 1)
		{
			break;
		}
	}

	number *= minus;
	return (number);
}
