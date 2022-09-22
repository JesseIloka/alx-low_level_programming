#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: something
 */
int _strcmp(char *s1, char *s2)
{
	int index = 0, flaw = 0;

	while (s1[index++])
	{
		if (s1[index] != s2[index])
			flaw++;
	}
	return (flaw);
}
