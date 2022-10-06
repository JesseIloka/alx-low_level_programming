#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of memory elements
 * @size: size of the data type
 *
 * Return: pointer to the memory of array.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *temp;
	unsigned int i;
	char *tempf;

	if (nmemb == 0 || size == 0)
		return (NULL);

	temp = malloc(nmemb * size);

	if (temp == NULL)
		return (NULL);

	tempf = temp;

	for (i = 0; i < (size * nmemb); i++)
		tempf[i] = '\0';

	return (temp);
}
