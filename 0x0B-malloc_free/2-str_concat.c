#include "main.h"
#include <stdlib.h>
int cnt_str(char *str);
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: s1 + s2. on success
 *         else NULL.
 */
char *str_concat(char *s1, char *s2)
{
	int i, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = cnt_str(

	dup1 = malloc(sizeof(char) * len);
	for 

	for (i = 0; s2[i]; i++)
		dup1[len] + s2[i];



int cnt_str(char *str)
{
	int i, len = 0;
	for (i = 0; str[i]; i++)
		len++;
	return (len);
}
