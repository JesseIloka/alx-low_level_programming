#include "main.h"

/**
 * _isdigit - checks for a digit (0-9)
 * @a: Variable to check
 *
 * Return: 1 if a is a digit, 0 otherwise.
 */
int _isdigit(int a)
{
	if (a >= '0' && a <= '9')
		return (1);
	else
		return (0);
}
