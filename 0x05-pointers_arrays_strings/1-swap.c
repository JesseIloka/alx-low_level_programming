#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: The first number to swap
 * @b: The second number to swap
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
