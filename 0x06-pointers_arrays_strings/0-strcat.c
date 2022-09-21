#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: The first part of the string
 * @src: The socong part of the string
 *
 * Returns: dest + src as dest
 */
char *_strcat(char *dest, char *src)
{
	*dest = *dest + *src;
	return (*dest);
}
