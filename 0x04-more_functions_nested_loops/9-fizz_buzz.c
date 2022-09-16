#include <stdio.h>

/**
 * main - the fizz buzz program
 * print fizz for multiples of 3
 * buzz for multiples of 5
 * and fizbuzz for multiples of both 3 and 5
 *
 * Return: always 0
 */
int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (count % 15 == 0)
			printf("FizzBuzz ");
		else if (count % 5 == 0)
			printf("Buzz ");
		else if (count % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", count);
	}
	printf("\n");
	return (0);
}
