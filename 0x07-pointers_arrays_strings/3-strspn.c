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
	unsigned int cnt = 0;

	while (*s)
	{
		for (index = 0; a[index] >= '\0'; index++)
		{
			if (a[index] == str[index])
				cnt++;
		}
	return (cnt);
i}
