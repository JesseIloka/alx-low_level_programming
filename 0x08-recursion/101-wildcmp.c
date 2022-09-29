#include "main.h"

int strlen_no_wilds(char *str);
void iterate_wild(char **wildstr);
char *postfix_match(char *str, char *postfix);
int wildcmp(char *s1, char *s2);

/** strlen_no_wilds - Returns the length of a string
 *                    ignoring wildcard characters
 * @str: The string to be measured
 *
 * Return: The length of str.
 */
int strlen_no_wilds(char *str)
{
	int len = 0, index = 0;

	if (*(str + index))
	{
		if ((*str != '*') && (*str != '?'))
			len++;

		index++;
		len += strlen_no_wilds(str + index);
	}

	return (len);
}

/**
 * iterate_wild - Iterate through a string
 * @wildstr: The sting to iterate
 */
void iterate_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		iterate_wild(wildstr);
	}
}

/**
 * postfix_match - chechks if a strig matches the postfix of another
 * @str: The string to be matched.
 * @postfix: The postfix.
 *
 * Return: If str and postfix are identical - a pointer to the null byte
 *         Otherwise - a pointer to the first unmatched character.
 */
char *postfix_match(char *str, char *postfix)
{
	int str_len = strlen_no_wilds(str) - 1;
	int postfix_len = strlen_no_wilds(postfix) - 1;

	if (*postfix == '*')
		iterate_wild(&postfix);
	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(str, postfix));
	}
	return (postfix);
}
/**
 * wildcmp - Compares two strings, considering wildcards
 * @s1; The first string
 * @s2: The second string
 *
 * Return; If the strings are identical 1
 *         Otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*S2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);
	if (*s1 == '\0')
		return (0);
	return (wildcmp (++s1, ++s2));
}
