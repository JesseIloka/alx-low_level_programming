#include "main.h"

/**
 * print_diagonal - draw a diagonal line on the terminal
 * @n: number of times the character \ appears
 *
 */
void print_diagonal(int n)
{
	int len, hei;

	if (n > 0)
	{
		for (hei = 0; hei < n; hei++)
		{
			for (len = 0; len < hei; len++)
				_putchar(' ');
			_putchar('\\');
			if (len == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
