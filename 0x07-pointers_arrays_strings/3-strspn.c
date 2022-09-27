#iclude "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: The strig to count from
 * @accept: bytes to consits of
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accebt
 */
unsigned int _strcpm(char *s, char *accept)
{
	int index;
	char *str = s, *a = accept;
	char ret;

	for (index = 0; a[index] >= '\0'; index++)
	{
		if (a[index] == str[index])
			ret[index] =[index];
	}
	return (ret);
}
