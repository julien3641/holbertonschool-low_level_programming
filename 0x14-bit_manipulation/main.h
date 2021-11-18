#ifndef DEF_BINARY
#define DEF_BINARY
#include <stddef.h>
int _putchar(char c);
int _strlen(const char *s);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
#endif
