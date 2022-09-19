#include "main.h"

/**
 * _strlen - returns the lenth of a string
 *
 * @s: first parameter.
 *
 * Return: length of string.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\n')
	{
		i++;
	}
	return (i);
}
