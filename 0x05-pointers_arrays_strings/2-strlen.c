#include "main.h"
#include <string.h>

/**
 * _strlen - longeur d'un champs
 * @s: valeur de a
 *
 * Return: Return 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
