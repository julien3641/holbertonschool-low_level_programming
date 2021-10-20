#include "main.h"

/**
 * factorial - rev_récursion
* @n: n
* Return: 0
*/

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
