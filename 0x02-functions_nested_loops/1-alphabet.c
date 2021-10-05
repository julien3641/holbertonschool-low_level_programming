#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - affiche l'alphabet
 *
 * Return: On success 1.
 *
 */

void print_alphabet(void)
{
	int i;
	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
