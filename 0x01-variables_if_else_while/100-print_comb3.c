#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	short int num;
	short int val;

	for (num = 0; num < 100; num++)
	{
		val = num + '48'
		putchar(val);
		if (num < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
