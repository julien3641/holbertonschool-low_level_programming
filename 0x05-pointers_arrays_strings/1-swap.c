#include "main.h"

/**
 * swap_int - reset
 * @a: valeur de a
 * @b: valeur de b
 * Return: Return 0
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a  = *b;
	*b = swap;
}
