#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root
 * @n: the number to look for the natural squareroot.
 *
 * Return: natural squareroot of n
 * if no natural square root, return -1
 */
int _sqrt_recursion(int n)
{
	int root;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	if ((root * root) == n)
		return (root);
	if (root = (n / 2))
		return (-1);

	return (_sqrt_recursion(n, root + 1);
			}
