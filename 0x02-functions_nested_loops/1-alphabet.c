#include <stdio.h>

/**
 * main - print the alphabets
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return;
}
int main(void)
{
	print_alphabet();
	return (0);
}
