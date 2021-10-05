#include "main.h"

/**
 * _islower - affiche l'alphabet x10
 *
 * @c: The character to print
 *
 * Return: On success 1.
 */
int _islower(int c)
{
	if  (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
