#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - create an array of chars and initializes
 * it with a specific char.
 * @size: size of the array
 * @c: character to initialize.
 *
 * Return: array of characters @c.
 *         if size is 0, return 0.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *a;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(char));
	while (i < size)
	{
		a[i] = c;
		i++;
	}

	return (a);
}
