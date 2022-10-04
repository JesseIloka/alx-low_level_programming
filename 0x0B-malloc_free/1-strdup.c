#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to a newly allocated space
 *           in memory which contains a copy of the string
 *           given as a parameter
 * @str: The string parameter
 *
 * Return: NULL if str = NULL
 *         pointer to duplicate str
 *         NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *s;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		s[i] = str[i];
	s[len] = '\0';
	return (s);
}
