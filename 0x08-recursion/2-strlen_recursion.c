#include "main.h"

/**
 * _strlen_recursion - returns the length of a given string
 * @s: string whose lenght is to be determined
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
