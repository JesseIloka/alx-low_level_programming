#include "main.h"

/**
 * cap_string - capatileze each word of the string.
 * @str: the string to capitalize
 *
 * Return: capitalized string.
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] == ' ')
		{
			if (str[index] >= 'a' && str[index] <= 'z')
			{
				index++;
				str[index] += 32;
				continue;
			}
		}
		index++;
	}
	return (str);
}
