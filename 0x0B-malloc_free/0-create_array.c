#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 *
 * @size: the size of the array to be created
 * @c: the character with which the array will be initialized
 *
 * Return: a pointer to the array, or Null if size = 0,
 * or if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(sizeof(char) * size);
	str[0] = c;
	free(str);
	return (str);
}
