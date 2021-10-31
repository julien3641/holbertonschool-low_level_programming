#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free the memory used by my_dog
 * @d: d
 * Return: 0
 */

void free_dog(dog_t *d)

{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
