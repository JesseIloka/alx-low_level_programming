#include "main.h"

/**
 * factorial - returns the factorial
 * of a given number
 * @n: The number to give the factorial
 *
 * Return: The factorial of n,
 * 1 if the number is 0.
 * -1 if the number is less than 0.
 */
int factorial(int n)
{

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n *= factorial(n - 1));
}
