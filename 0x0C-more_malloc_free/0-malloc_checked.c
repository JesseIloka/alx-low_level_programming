#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the number of memory to allocate
 *
 * Return: if malloc fails; terminate process.
 */
void *malloc_checked(unsigned int b)
{
	void *temp;

	temp = malloc(b);

	if (temp == NULL)
		exit(98);
	return (temp);
}
