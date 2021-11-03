#include "function_pointers.h"

/**
 * int_index - d
 * @array: call the array "array"
 * @size: size of the array
 * @cmp: pointer to a function
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == 0 || size == 0 || cmp == 0)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
