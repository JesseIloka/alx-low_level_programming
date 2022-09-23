#include "main.h"

/**
 * string_toupper - change string to upper case
 * @*: string to change to upper
 *
 * Return: uppercase string
 */
char string_toupper(char *)
{
	int index = 0;

	while (*[index])
	{
		if (*[index] >= 'a' && *[index] <= 'z')
			*[index] -= 32;
		index++;
	}
	return (str);
}
