#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_diagsums - print diagsums
 *
 * @a: char
 * @size: int
 *
 * Return: 0
*/

void print_diagsums(int *a, int size)

{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[(size + 1) * i];
		sum2 = sum2 + a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
