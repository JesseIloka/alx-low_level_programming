#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * @argc: number of arguments passed with functon
 * @argv: array of arguments passed with function
 *
 * Return: if no number is passed 0
 *         if number contains symbol 1.
 */
int main(int argc, char *argv[])
{
	int num1, num2, sum;
	
	if (argc < 2)
	{
		printf("%d\n", 0);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		sum = num1 + num2;

		if (num1 >= 0 && num2 >= 0)
			printf("%d\n", sum);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	return (0);
}
