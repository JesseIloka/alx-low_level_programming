#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialze a variable of type struct dog
 * @d: the struct for dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
