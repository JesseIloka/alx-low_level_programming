#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print natural numbers up to 98 ascending or descending.
 * @n: number to start printing from
 *
 * Return: numbers n to 98.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
	else
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
}

