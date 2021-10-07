#include "main.h"

/**
 * print_square - print #
 * @size: #
 *
 * Return: 1 or 0
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			_putchar ('#');
			for (j = 1; j < size; j++)
			{
				_putchar ('#');
			}
			_putchar ('\n');
		}
	}
}
