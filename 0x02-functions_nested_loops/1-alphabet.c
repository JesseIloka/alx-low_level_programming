#include <stdio.h>

/**
 * main - print the alphabets
 *
 * Return: Always void
 */
void print_alphabet(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return;
}
