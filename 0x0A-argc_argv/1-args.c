#include <stdio.h>

/**
 * main - print the number of arguments passed into it
 * @argc: number of arguments
 * @argv: arguments passed at the command line
 *
 * Return: Always 0.
 */
int main(int argc, char __attribute__((__unused__)) *argsv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
