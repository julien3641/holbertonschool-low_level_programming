#include "main.h"

/**
 * print_sign - affiche l'alphabet x10
 *
 * @n: The character to print
 *
 * Return: si n = 0 alors 0 else if n >0 alors 1 sinon -1
 */
int print_sign(int n)
{
	if  (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
