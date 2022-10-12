#include <stdio.h>
#include "funcion_pointers.h"
void f(char *);
/**
 * print_name - a function that prints name
 * @name: the name to print
 * @f: function that...
 *
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
/**
 * f - print function
 * @s - name characters
 */
void f(char *s)
{
	printf("Hello my name is %s.", s);
}

