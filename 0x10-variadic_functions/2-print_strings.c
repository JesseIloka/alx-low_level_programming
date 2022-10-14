#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print stings
 * @seperator: seperated the strings
 * @n: number of arguments passed to function
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");

	va_end(ap);
}
