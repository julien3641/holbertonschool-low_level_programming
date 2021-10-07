#include "main.h"

/**
 * more_numbers - écrit de 1 à 9 sauf 2 et 4
 *
 *
 * Return: 1 or 0
 */

void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar ((i / 10) + '0');
			}
			{
				_putchar ((i % 10) + '0');
			}
		}
		_putchar ('\n');
	}
}
