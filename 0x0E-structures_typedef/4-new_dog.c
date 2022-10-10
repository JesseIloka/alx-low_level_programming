#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog type function
 * @name: name of the new dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: profile of a new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pup;

	pup = malloc(sizeof(dog_t));

	if (pup == NULL)
		return (NULL);
	pup->name = name;
	pup->age = age;
	pup->owner = owner;
	return (pup);
}

