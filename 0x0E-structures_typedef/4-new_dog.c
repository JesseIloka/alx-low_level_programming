#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - create a new dog type function
 * @name: name of the new dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: pointer of a new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *_name;
	char *_owner;

	dog_t *pup;

	pup = (dog_t *)malloc(sizeof(dog_t));

	if (pup == NULL)
		return (NULL);
	pup->age = age;
	if (name)
	{
		_name = malloc(sizeof(char) * (strlen(name) + 1));
		if (!_name)
		{
			free(pup);
			return (NULL);
		}
		pup->name = strcpy(_name,name);
	}
	else
		pup->name = NULL;
	if (owner)
	{
		_owner = malloc(sizeof(char) *(strlen(owner) + 1));
		if (!_owner)
		{
			free(pup);
			return (NULL);
		}
		pup->owner = strcpy(_owner, owner);
	}
	else
		pup->owner = NULL;
	return (pup);
}

