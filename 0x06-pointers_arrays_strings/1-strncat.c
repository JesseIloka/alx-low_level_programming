#include "main.h"

/**
 * *_strncat - conacatenates two stings uising n number of bytes
 * @dest: The string to be appended to
 * @src: String to append to dest
 * @n: number of bytes
 *
 * Return: concatenated string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest - len++] = src[index];
	return (dest);
}
