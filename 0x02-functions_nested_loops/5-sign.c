#include "main.h"

/**
 * print_sign - print if number is greater, lesser or equal to zero
 * @i: variable of the integer
 *
 * Return : 1 if positive, -1 if negatvie and 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
