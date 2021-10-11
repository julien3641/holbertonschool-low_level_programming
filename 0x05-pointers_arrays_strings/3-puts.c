#include "main.h"
#include <string.h>

/**
 * _puts - longeur d'un champs
 * @str: valeur de a
 *
 * Return: Return 0
 */
void _puts(char *str)
{
	int nb;
	{
		for (nb = 0; str[nb] != '\0'; nb++)
		_putchar (str[nb]);
		_putchar ('\n');
	}
}
