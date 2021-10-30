#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initalization of init_dog
 * @d: pointer
 * @name: dog's name
 * @age: dog's age
 * @owner: owner of the dog
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
