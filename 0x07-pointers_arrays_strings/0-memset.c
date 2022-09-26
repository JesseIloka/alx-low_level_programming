#include "main.h"

/**
 * _memset - fills memory with a constant type.
 * @s: pointer of memory
 * @b: constant byte to assign to address of s
 * @n: number of bytes to be filled by memeroy
 *
 * Return: pointer ot the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char *m = s, val = b;

	for (i = 0; i < n; i++)
		m[i] = val;
	return (m);
}
