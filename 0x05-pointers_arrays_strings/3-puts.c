#include "main.h"

/**
 * _puts - print a string folowed by a new line
 * @str: the string to print out
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
