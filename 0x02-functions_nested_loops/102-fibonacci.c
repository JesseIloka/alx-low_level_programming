#include <stdio.h>

/**
 * main - print fibonacci sequence
 *
 * Return: 0
 */
int main(void)
{
	int count, fib1 = 0, fib2 = 1, sum;

	for (count = 1; count <= 50; count++)
	{
		sum = fib1 + fib2;
		printf("%d", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf("\n");
	}
	return (0);
}
