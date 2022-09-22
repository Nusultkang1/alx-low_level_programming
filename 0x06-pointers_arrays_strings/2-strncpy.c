#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strncpy - copies a string
 *
 * @dest: first string.
 * @src: second string.
 * @n: third parameter.
 *
 * Description: *dest and *src are pointers to dest and src.
 *
 * Return: Success.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len;

	len = 0;

	while (src[len] != '\0' && i < n)
	{
		dest[len] = src[len];
		len++;
	}

	while (len < n)
	{
		dest[len] = '\0';
		len++;
	}

	return (dest);
}
