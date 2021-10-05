#include "main.h"

/**
 * _abs - affiche l'alphabet x10
 *
 * @n: The character to print
 *
 * Return: 1 ou 0 ou 98
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
