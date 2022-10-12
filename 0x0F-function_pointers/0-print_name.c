#include <stdio.h>
#include "function_pointers.h"
void f(char *);
/**
 * print_name - a function that prints name
 * @name: the name to print
 * @f: function that...
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
