#include <stdio.h>

/**
 * main - print all argumnts it recieves
 * @argc: number of arguments it receives
 * @argv: command line argumets
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{

	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
