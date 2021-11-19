#include "main.h"
#include <stdio.h>

/**
 *get_endianness - function that checks the endianness
 * Return: return 1 if big and 0 if small
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	if (*c)
		return (1);
	else
		return (0);
}
