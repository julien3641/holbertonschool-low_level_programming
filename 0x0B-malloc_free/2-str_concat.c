#include "main.h"
#include "stdlib.h"

/**
 * str_concat - concatenate
 * @s1: s1
 * @s2: s2
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	char *s3;

	if (s1 == 0 && s2 == 0)
	{
		return (0);
	}
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	l = i + j;
	s3 = malloc((l * (sizeof(char) + 1)));
	if (s3 == 0)
	{
		return (0);
	}
	j = 0;
	while (k < l)
	{
		if (k <= i)
			s3[k] = s1[k];
		if (k >= i)
		{
			s3[k] = s2[j];
			j++;
		}
		k++;
	}
	s3[k] = '\0';
	return (s3);
}
