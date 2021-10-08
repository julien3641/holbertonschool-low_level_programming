#include "main.h"

/**
 * print_number - print numbers
 *
 * @n: -n
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar(45);
		_putchar(n = (-n));
	}
	else
		_putchar(n);
}
