#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strcat - concatenates two strings.
 *
 * @dest: first string to concatenate.
 * @src: second string to concatenate.
 *
 * Description: *dest and *src are pointers to
 * dest and src.
 *
 * Return: *dest.
 */

char *_strcat(char *dest, char *src)
{
	int len, j;

	len = 0;
	j = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while (src[j] != '\0')
	{
		dest[len] = src[j];
		j++;
		len++;
	}

	dest[len] = '\0';

	return (dest);
}
