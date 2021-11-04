#ifndef VARIADIC_FUNC
#define VARIADIC_FUNC
#include <stdarg.h>
#include <stdio.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(char *separator, va_list args);
void print_integer(char *separator, va_list args);
void print_float(char *separator, va_list args);
void print_string(char *separator, va_list args);
/**
 * struct type - struc type
 * @f: f
 * @type: type
 */

typedef struct type
{
	char *type;
	void (*f)(char *separator, va_list args);
} type_t;
#endif
