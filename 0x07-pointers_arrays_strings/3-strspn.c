#include <string.h>
#include "main.h"

/**
 * _strspn - return a constent byte
 *
 * @s: char
 * @accept: char
 *
 * Return: 0
*/

unsigned int _strspn(char *s, char *accept)

{
	return (strspn(s, accept));
}
