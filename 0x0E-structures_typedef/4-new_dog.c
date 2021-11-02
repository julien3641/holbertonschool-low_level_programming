#include "dog.h"
#include <stdlib.h>

/**
 * *_strcpy - longeur d'un champs
 * @dest: valeur de a
 * @src: valeur de n
 * Return: Return 0
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - stor a new dog
 * @name: dog name
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: New dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int len1 = 0, len2 = 0;
	dog_t *nd;

	while (name[len1])
		len1++;
	while (owner[len1])
		len2++;

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
	{
		free(nd);
		return (NULL);
	}

	nd->name = malloc((len1 + 1) * sizeof(char));
	if (nd->name == NULL)
	{
		free(nd->name);
		free(nd);
		return (NULL);
	}
	nd->owner = malloc((len2 + 1) * sizeof(char));
	if (nd->owner == NULL)
	{
		free(nd->owner);
		free(nd->name);
		free(nd);
		return (NULL);
	}
	_strcpy((*nd).name, name);
	nd->age = age;
	_strcpy((*nd).owner, owner);
	return (nd);
}
