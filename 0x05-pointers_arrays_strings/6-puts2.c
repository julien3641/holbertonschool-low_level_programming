#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - longeur d'un champs
 * @str: valeur de str
 *
 * Return: Return 0
 */
void puts2(char *str)
{
	int n = strlen(str);
	int i;
	{
		for (i = 0; i < n; i += 2)
		{
			_putchar(str[i]);
		}
		_putchar ('\n');
	}
}
