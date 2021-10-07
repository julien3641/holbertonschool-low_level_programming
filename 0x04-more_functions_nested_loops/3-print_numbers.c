#include "main.h"

/**
 * print_numbers - écrit de 1 à 9
 *
 *
 * Return: 1 or 0
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		_putchar (i);
	_putchar ('\n');
}
