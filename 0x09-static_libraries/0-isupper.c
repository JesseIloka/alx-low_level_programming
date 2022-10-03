#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if character is uppecase
 * @c: character to check case
 *
 * Return: 1 if c is upper, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
