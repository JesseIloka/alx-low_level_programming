#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph = 'a';

	while(alph <= 'z')
	{
		if(!(alph == 'q' ||  alph == 'e'))
		{
			putchar(alph);
		}
	alph++;
	}
	return (0);
}
		
