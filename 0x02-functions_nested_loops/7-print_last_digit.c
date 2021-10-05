#include "main.h"

/**
 * print_last_digit - last digit
 *
 * @n: The character to print
 *
 * Return: 1 ou 0 ou 98
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = -1 * n;

	_putchar('0' + n);
	return (n);
}
