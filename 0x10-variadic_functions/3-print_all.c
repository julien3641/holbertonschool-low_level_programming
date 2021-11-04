#include "variadic_functions.h"

/**
 * print_char - print char
 * @separator: Separator
 * @args: list of variadic
 */

void print_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * print_integer - print integer
 * @separator: separator
 * @args: args
 */

void print_integer(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
}

/**
 * print_float - float
 * @separator: separator
 * @args: args
 */

void print_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * print_string - print string
 * @separator: separator
 * @args: args
 */

void print_string(char *separator, va_list args)
{
	char *arg = va_arg(args, char *);

	if (arg == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}
	printf("%s%s", separator, arg);
}


/**
 * print_all - print all arguments
 * @format: format
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, j = 0;
	type_t remi[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	char *separator = "";

	va_start(ap, format);
	i = 0;
	while (format != NULL && format[i])
	{
		j = 0;
		while (remi[j].type)
		{
			if (format[i] == *remi[j].type)
			{
				remi[j].f(separator, ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
