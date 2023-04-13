#include <stdio.h>
#include <stlib.h>
#include "search_algos.h"

/**
 * linear_search - performs a linear search on an array of integers.
 *
 * Description: Always prints a value each time it is compared in the array
 *
 * @array: The array of integers to be searched
 * @size: The size of the array
 * @value: The integer to be searched for in the array
 *
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}
