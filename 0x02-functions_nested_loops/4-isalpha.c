#include "main.h"

/**
 * _isalpha - affiche l'alphabet x10
 *
 * @c: The character to print
 *
 * Return: On success 1.
 */
int _isalpha(int c)
{
	if  (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
