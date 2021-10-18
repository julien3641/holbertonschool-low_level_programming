#include <string.h>
#include "main.h"

/**
 * _memset - return a constent byte
 *
 * @s: char
 * @b: char
 * @n: unsigned int
 * Return: 0
*/

char *_memset(char *s, char b, unsigned int n)

{
	return (memset(s, b, n));
}
