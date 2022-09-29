#include "main.h"

/**
 * length - returns lengt of string array.
 * @s: The string to measure
 *
 * Returns: Length of the string.
 */
int length(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += length(s + len);
	}
	return (len);
}

/**
 * check - check if string is palindrome
 * @s: string to check
 * @len: the length of s
 * @index: The index of the string to be checked
 *
 * Return: if the string is palindrome; 1
 *         if the string is not palindrome; 0
 */
int check(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);
	if (s[index] == s[len - index - 1])
		return (check(s, len, index + 1));
	return(0);
}

/** is_palindrome - check if string is palindrome
 * @s: the string to check if it is a palindrome
 *
 * Return: If s is palindrome; 1
 *         If s in not palindrome 0
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = length(s);

	if (!(*s))
		return (1);
	return (check(s, len, index));
}
