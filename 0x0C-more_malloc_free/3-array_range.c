#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: the minumum number in the array
 * @max: the maximum number in the array
 *
 * Return: on success, pointer to the newly created array
 *                     if min > max, NULL.
 *                     if malloc fails, NULL.
 */
int *array_range(int min, int max)
{
	int index;
	void *mem;
	int *temp;

	if (min > max)
		return (NULL);

	mem = malloc(sizeof(int) * (max - min + 1));

	if (mem == NULL)
		return (NULL);

	temp = mem;
	for (index = 0; index <= (max - min); index++)
	{
		temp[index] = min + index;
	}
	return (temp);
}
