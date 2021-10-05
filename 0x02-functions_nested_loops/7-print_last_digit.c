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
	if (n > 0)
	{
		_putchar(n % 10 + '0');
		return (n % 10);
	}
	else
	{
		n = n * -1;
		_putchar(n % 10 + '0');
		return (n % 10);
	}
}
