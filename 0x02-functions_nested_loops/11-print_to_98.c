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
		for (; n <= 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("\n");
}

