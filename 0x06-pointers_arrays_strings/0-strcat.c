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
	int i;

	int j = strlen(src);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + j] = '\0';
	}
	return (*dest);
}
