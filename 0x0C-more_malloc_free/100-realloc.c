#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @prt: a pointer to the memory previously allocated with a call to malloc
 * @old_size: the size of the allocated space ptr
 * @new_size: the new size of the new memory block
 *
 * Return: one thing like that
 */
void *_realloc(void *ptr, unsigned int old_size __attribute__((unused)), unsigned int new_size)
{
	void *mem;

	if (new_size == old_size)
		return (*ptr);
	if (ptr == NULL)
		return (malloc(new_size));
