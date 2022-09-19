#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - returns the lenth of a string
 *
 * @s: first parameter.
 *
 * Return: length of string.
 */

int _strlen(char *s)
{
	int i;

	while (*(s + i) != '\n')
	{
		i++;
	}
	return (i);
}
