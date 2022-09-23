#include "main.h"

/**
 * reverse_array - reverses the contecnt of an array of intergers
 * @a: array of intergers
 * @n: numbers of elements of the array
 */
void reverse_array(int *a, int n)
{
	int index, tmp;

	for (index = n - 1; index >= n; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}

