#include <stdio.h>

/**
 * main - Program that prints all the numbers of base 16 in lowercase, followed by a new line, using only putchar function exactly three times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char letter;
	
	for (num = 0; num < 10; num ++)
		putchar((num % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
