#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - execute an array of function
 * @array: array of functions to be carried out
 * @size: is the size of the array
 * @action: pointer to the function needed to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || size < 1 || action == NULL)
		return;
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
