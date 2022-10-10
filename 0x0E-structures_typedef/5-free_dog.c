#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - clear the memory of dog
 * @d: the struct of the dog to be cleared.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
