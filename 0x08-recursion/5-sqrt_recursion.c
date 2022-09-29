#include "main.h"

/**
 * find_root - find if the root of a number
 * @root: root to be tested
 * @num: numer to find the squareroot of.
 *
 * Return: if number has natural root, the square root
 * 	   if number does not have the narural root, -1.
 */
int find_root(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == (num / 2))
		return (-1);
	return (find_root(num, root _ 1));
}

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

	return (find_root(n, root + 1));
}
