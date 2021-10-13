#include "main.h"
#include <string.h>

/**
 * reverse_array - compare Two Strings
 *
 * @a: destination
 * @n: src
 *
 * Return: true or false
 */
void reverse_array(int *a, int n)
{
	int i;
	int x;

	for (i = 0; i <  n / 2; i++)
	{
		x = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = x;
	}
}
