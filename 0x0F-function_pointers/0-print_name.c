#include "function_pointers.h"

/**
 * print_name - print name
 * @f: call to a function
 * @name: name
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
