#include "main.h"
#include <stdlib.h>

/**
 * array_range - all the value in integer
 * @min: min
 * @max: max
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int i;
	int *tab;

	if (min > max)
		return (0);
	tab = malloc((max - min + 1) * sizeof(int));
	if (tab == 0)
		return (0);
	for (i = 0; min <= max; i++)
		tab[i] = min++;
	return (tab);
}
