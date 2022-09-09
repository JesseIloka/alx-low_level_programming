#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	int c;

	while (n < 10)
	{
		c = n + 48;
		putchar(c);
		n++;
	}
	putchar('\n');
	return (0);
}
