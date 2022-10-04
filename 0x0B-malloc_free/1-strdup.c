#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as parameter
 *
 * @str: the string in question
 *
 * Return: NULL if str = NULL, on success, a pointer to the
 * duplicated string.
 */

char *_strdup(char *str)
{
	unsigned int size;
	int i;
	str = (char *) malloc(sizeof(char) * size);

	if (str == NULL)
	{
		return (NULL);
	}

	if (size > sizeof(str))
	{
		return (NULL);
	}

	while (i < size)
	{
		char *ptr = str[i];
		i++;
	}
	str[i] = '\0';
	return (ptr);
	free(str);
}
