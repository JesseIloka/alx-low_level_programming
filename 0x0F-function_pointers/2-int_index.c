#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an interger
 * @array: list of integers
 * @size: number of elements in the array
 * @cmp: pointer to function to compare values
 *
 * Return: index of the first element which cmp function
 *         does not return 0
 *         if no element matches return -1
 *         if size <= 0, return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
