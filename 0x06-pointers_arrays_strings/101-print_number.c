#include "main.h"
#include <string.h>

/**
 * print_number  - change all first word lowercase to uppercase
 *
 * @n: points a variable of type char
 * Return: true or false
 */
void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		n *= -1;
		k = n;
		_putchar('-');
	}

	k /= 10;
	if (k != 0)
		print_number(k);
	_putchar((unsigned int) n % 10 + '0');

}
