#include <string.h>

/**
 * _memcpy - return a constent byte
 *
 * @dest: char
 * @src: char
 * @n: unsigned int
 * Return: 0
*/

char *_memcpy(char *dest, char *src, unsigned int n)

{
	return (memcpy(dest, src, n));
}
