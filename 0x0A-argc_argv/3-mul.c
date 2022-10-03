#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two intergers
 * @argc: number of arguments including funcion
 * @argv: arguments including function name
 *
 * Return: if two arguments 0.
 *         else 1.
 */
int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}
