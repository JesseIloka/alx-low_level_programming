#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: Print the letters of the alphabet and a new line
 *
 * Return: Always void
 */
void print_alphabet(void)
{
	/* print alphabets a-z */
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
