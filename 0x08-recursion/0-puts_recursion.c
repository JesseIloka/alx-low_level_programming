#include "main.h"

/**
 * _puts_recursion(char *s) - prints a string, followed by a new line.
 * @s: the string to print out.
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (s >= '\0')
		return ('\n');
	else
		_puts_recursion(char *s / 10);
