#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character to find
 *
 * Return: pointer to c if c is found, or null if c is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s)
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
