#include "main.h"

/**
 * *_strcpy - copies the string pointd to by src.
 * @dest: first parameter.
 * @src: second parameter.
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, n;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (n = 0; n < len; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';

	return (dest);
}
