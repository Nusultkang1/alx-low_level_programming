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
	int len, j;

	len = 0;
	j = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[len] = src[j];
		len++;
		j++;
	}

	dest[len] = '\0';

	return (dest);
}
