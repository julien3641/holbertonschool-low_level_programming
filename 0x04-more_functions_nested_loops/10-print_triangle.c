#include "main.h"

/**
 * print_triangle - print a straiht line
 * @size: valeur d'arrêt
 *
 */

void print_triangle(int size)
{
	int etage;
	int espace;
	int dieze;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (etage = 0; etage < size; etage++)
		{
			for (espace = size - etage; espace > 1; espace--)
			{
				_putchar (' ');
			}
			{
				for (dieze = 0; dieze <= etage; dieze++)
				{
					_putchar ('#');
				}
				_putchar ('\n');
			}
		}
	}
}
