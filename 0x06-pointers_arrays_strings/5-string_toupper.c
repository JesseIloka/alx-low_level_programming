#include "main.h"

/**
 * string_toupper - change string to upper case
 * @str: string to change to upper
 *
 * Return: uppercase string
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
