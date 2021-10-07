#include "main.h"

/**
 * print_most_numbers - écrit de 1 à 9 sauf 2 et 4
 *
 *
 * Return: 1 or 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar (i);
		}
	}
	_putchar ('\n');
}
