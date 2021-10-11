#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - longeur d'un champs
 * @str: valeur de str
 *
 * Return: Return 0
 */
void puts_half(char *str)
{
	int n = strlen(str);
	int i;
	{
		if (n % 2 == 0)
			for (i = n / 2; i < n; i++)
			{
				_putchar(str[i]);
			}
		else
			for (i = n / 2 + 1; i < n; i++)
			{
				_putchar(str[i]);
			}
		_putchar ('\n');
	}
}
