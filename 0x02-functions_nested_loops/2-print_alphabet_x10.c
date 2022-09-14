#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times.
 *
 * Return: null
 */
void print_alphabet_10x(void)
{
	int i;
	char letter;
	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
