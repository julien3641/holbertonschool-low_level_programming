#include "main.h"

/**
 * _pow_recursion - rev_récursion
 * @x: x
 * @y: y
 * Return: 0
*/

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else if (y % 2 == 0)
	{
		return (_pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
	}
	return (x * _pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
}
