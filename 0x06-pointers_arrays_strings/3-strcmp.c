#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strcmp - compares two strings
 *
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: 0.
 */

int _strcmp(char *s1, char *s2)
{
	int compstat = 0;

	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	compstat = (*s1 == *s2)?:(*s1 > *s2)?:-1;

	return (compstat);
}
