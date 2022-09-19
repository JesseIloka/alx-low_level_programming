#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: the string
 */
void print_rev(char *s)
{
	char r[] = -*s;

	while(r)
	{
		_putchar(r++);
	}
	_putchar('\n')
}
