#include "main.h"

/**
 * int_index - searches for an integer
 * @array: the array of integer
 * @size: The size of the array
 * cmp: A pointer to the function to be used to compare values
 *
 * Return: 1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
