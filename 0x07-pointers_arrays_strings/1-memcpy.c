#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: varible to copy to 
 * @src: variable to copy from
 * @n: number of bytes to copy
 *
 * Return: dest as a copu of src
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned char cpy = src;
	char *m = dest;

	for (i = 0; i < n; i++)
		m[i] = cpy;
	return (m);
}
