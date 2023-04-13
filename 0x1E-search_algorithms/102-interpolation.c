#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * interpolation_search - Performs a search for a value on a sorted array using interpolation search
 *
 * Description: Always outputs a value every time it is compared
 *
 * @array: A pointer to the first element of the array on which the search is performed
 * @size: The size of the array
 * @value: The integer for which the search is performed
 *
 * Return: Always EXIT_SUCCESS
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t x, y, z;

	if (array == NULL)
		return (-1);

	for (y = 0, z = size - 1; z >= y;)
	{
		x = y + (((double)(z - y) / (array[z] - array[y])) * (value - array[y]));
		if (x < size)
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", x);
			break;
		}

		if (array[x] == value)
			return (x);
		if (array[x] > value)
			z = x - 1;
		else
			y = x + 1;
	}

	return (-1);
}
