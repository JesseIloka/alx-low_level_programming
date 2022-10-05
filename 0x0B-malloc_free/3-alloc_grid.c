#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2d array of ints
 * @width: the columns of the array
 * @height: the rows of the array
 *
 * Return: pointer to array of width * height on success
 *         on failure, return NULL
 *         if width and height is 0, NULL.
 */
int **alloc_grid(int width, int height)
{
	int **array2d;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array2d = malloc(sizeof(int *) * height);
	if (array2d == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array2d[i] = malloc(sizeof(int) * width);

		if (array2d[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(array2d[i]);
			free(array2d);
			return (NULL);
		}

	for (j = 0; j < width; j++)
		array2d[i][j] = 0;
	return (array2d);
}
