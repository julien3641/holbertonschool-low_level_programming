#include "function_pointers.h"

/**
 * array_iterator - d
 * @array: call the array "array"
 * @size: size of the array
 * @action: pointer to a function
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	if (array != 0 && size != 0 && action != 0)
	for (i = 0; i < size; i++)
		action(array[i]);
}
