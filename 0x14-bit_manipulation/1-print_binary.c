#include "main.h"

/**
 * print_binary - function that prints a binary number from a number
 * @n: number
 * Return: Return the binary number
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
