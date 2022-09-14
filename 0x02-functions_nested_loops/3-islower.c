#include "main.h"

/**
 * _islower - Entry point
 * @c: The character to check
 *
 * Return: 1 if character is lower case else return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
