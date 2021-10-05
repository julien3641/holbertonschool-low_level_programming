#include <stddef.h>
#include "main.h"

/**
 * main - write _putchar
 *
 * Return: On success 1.
 *
 */

int main(void)
{
	int i;
	char str[8] = "_putchar";
	{
		for (i = 0 ; str[i] != '\0'; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
	return (0);
}
