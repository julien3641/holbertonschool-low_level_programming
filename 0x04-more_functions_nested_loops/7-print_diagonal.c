#include "main.h"

/**
 * print_diagonal - print a straiht line
 * @n: valeur d'arrêt
 *
 * Return: 1 or 0
 */

void print_diagonal(int n)
{
	int i;
	int j;
	int nbespaces;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			nbespaces = i;
			for (j = 1; j <= nbespaces; j++)
			{
				_putchar (32);
			}
			_putchar ('\\');
			_putchar ('\n');
		}
	}
}
