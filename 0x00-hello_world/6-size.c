#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	scanf("%c, %d, %lu, %llu, %f", &a, &b, &c, &d, &e);

	printf("Size of char: %u byte(s)\n", sizeof(a));
	printf("Size of int: %lu byte(s)\n", sizeof(b));
	printf("Size of long int %lu byte(s)\n", sizeof(c));
	printf("Size of long long int %lu byte(s)\n", sizeof(d));
	printf("Size of float %lu byte(s)\n" sizeof(e));
	return (0);
}
