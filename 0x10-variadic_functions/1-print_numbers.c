#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers followed by a new line
 * @seperator; string to be printed between numbers
 * @n: number of intergers passed to function
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != (n -1) &&) seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(ap);
}

