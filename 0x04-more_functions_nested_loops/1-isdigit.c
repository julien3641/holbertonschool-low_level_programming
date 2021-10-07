#include "main.h"

/**
 * _isdigit - est en chiffre
 * @c: int
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c  <= 57)
		return (1);
	else
		return (0);
}
