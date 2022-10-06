#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two stings
 * @s1: first part of the string.
 * @s2: second part of the string
 * @n: number of bytes to copy from s2
 *
 * Return: pointer to newly allocated space in memory
 *         if malloc fails, return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index]; index++)
		len++;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	len = 0;
	for (index = 0; s1[index]; index++)
		str[len++] = s1[index];
	for (index = 0; s2[index] && index < n; index++)
		str[len++] = s2[index];
	str[len] = '\0';
	return (str);
}
