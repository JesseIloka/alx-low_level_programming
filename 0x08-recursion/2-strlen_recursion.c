#include "main.h"

/**
 * _strlen_recursion - retruns the lenght of string
 * @s: the string 
 * 
 * Return: The length of string s.
 */
int _strlen_recursion(char *s)
{
	int count;
	
	if (*s)
	{
		count++;
		_strlen_recursion(s + 1);
	}
	else
		return (count);
}	


