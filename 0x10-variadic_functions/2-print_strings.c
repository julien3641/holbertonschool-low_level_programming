#include "variadic_functions.h"

/**
 * print_strings - print any string
 * @separator: separatot
 * @n: n
 * Return: (nil)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *str;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char*);
		if (str == 0)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && separator != 0)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
