#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - print a character
 * @arg: LIst of arguments
 *       pointing to the character
 */
void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}
/**
 * print_int - print an interger
 * @arg: List of arguments
 *       pointing to the interger
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}
/**
 * print_float - print a floating point number
 * @arg: List of arguments pointing to
 *       a floating point number
 */
void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}
/**
 * print_string - print a string of character
 * @arg: List of arguments pointing to
 *       the string of character
 */
void print_string(va_list arg)
{
	char *word;

	word = va_arg(arg, char *);
	if (word == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", word);
}

/**
 * print_all - prints anything
 * @format: all the types of arguments
 *          passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *seperator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", seperator);
			funcs[j].print(args);
			seperator = ", ";
		}

		i++;
	}
	printf("\n");
	va_end(args);
}
