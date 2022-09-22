#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strncat - concatenate two strings
 * @dest: first string
 * @src: second string
 * @n: third parameter
 * Return: *dest.
 */

char *_strncat(char *dest, char *src, int n);
{
	if (dest == NULL)
	{
		return NULL;
	}

	while (dest != '\0')
	{
		dest++;
	}

	while (n--)
	{
		if (!(dest++ = *src++))
		{
			return (dest);
		}
	}

	dest = '\0';

	return (dest);
}
