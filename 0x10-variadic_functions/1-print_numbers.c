#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: separator
 * @n: n
 * Return: return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	if (separator  == 0)
		return;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, unsigned int));
		if (i != (n - 1))
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
