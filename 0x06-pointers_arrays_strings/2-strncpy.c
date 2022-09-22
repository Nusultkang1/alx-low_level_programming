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
	if ((dest == NULL) && (src == NULL))
	{
		return NULL;
	}

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest);
}
