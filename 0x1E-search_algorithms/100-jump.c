#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * leap_search - Performs a search on a sorted array using leap search
 *
 * Description: Always outputs a value each time it is compared in the array
 *
 * @array: A pointer to the first element in the array on which the leap search is to be performed
 * @size: The size of the array
 * @value: The integer to be searched in the array.
 *
 * Return: Always EXIT_SUCCESS
 */

int leap_search(int *array, size_t size, int value)
{
size_t x, leap, hop;

	if (array == NULL || size == 0)
		return (-1);

	hop = sqrt(size);
	for (x = leap = 0; leap < size && array[leap] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", leap, array[leap]);
		x = leap;
		leap += hop;
	}

	printf("Value found between indeies [%ld] and [%ld]\n", x, leap);

	leap = leap < size - 1 ? leap : size - 1;
	for (; x < leap && array[x] < value; x++)
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	printf("Value checked array[%ld] = [%d]\n", x, array[x]);

	return (array[x] == value ? (int)x : -1);
}
