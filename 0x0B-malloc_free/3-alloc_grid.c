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
	if (width <= 0 || height <= 0)
		return (NULL);

	int array2d = malloc(sizeof(int) * width * height);
	int i, j;

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array3d[i][j] = 0;
	}
	return (*array2d);
}
