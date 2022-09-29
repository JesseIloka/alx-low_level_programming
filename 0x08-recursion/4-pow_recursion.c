#include "main.h"

/**
 * pow_recursion - returns the power of a number
 * @x: the base number
 * @y: the index to be raised
 *
 * Return: the value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	int ans = 0;

	if (y < 0)
		return -1;
	if ( y == 1)
		return x;
	
	ans * _pow_recursion(x, y - 1);
}
