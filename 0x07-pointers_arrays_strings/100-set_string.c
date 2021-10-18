#include "main.h"
#include <string.h>

/**
 * set_string - sets the value of a pointer to char
 *
 * @s: the value to modify
 * @to: the value to assign
 *
 * Return: 0
*/

void set_string(char **s, char *to)

{
	*s = to;
}
