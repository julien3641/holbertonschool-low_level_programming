#include "main.h"

/**
 * _print_rev_recursion - rev_récursion
* @s: s
* Return: 0
*/

void _print_rev_recursion(char *s)
{
	if (*s =='\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	s--;
	_putchar(*s);
}
