#include "main.h"

/**
 * print_square - print a # square.
 * @size: the size of the square
 *
 */
void print_square(int size)
{
	int len, wid;

	if (size > 0)
	{
		for (wid = 0; wid < size; wid++)
		{
			for (len = 0; len < size; len++)
				_putchar('#');
			if (wid == size - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
