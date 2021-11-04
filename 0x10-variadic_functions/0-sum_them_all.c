#include "variadic_functions.h"

/**
 * sum_them_all - sum of all arguments
 * @n: n
 * Return: Return
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(arg, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arg, unsigned int);
	va_end(arg);
	return (sum);
}
