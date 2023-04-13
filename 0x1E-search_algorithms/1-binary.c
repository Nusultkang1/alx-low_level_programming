#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Performs a binary search on an array of integers.
 *
 * Description: Always outputs the [sub]aray being searched after each change.
 *
 * @array: A pointer to the first element of the array on which the binary search operation is performed
 * @size: The size of the array
 * @value: The integer to be searched for in the array
 *
 * Return: Always EXIT_SUCCESS
 */

int binary_search(int *array, size_t size, int value)
{
	size_t y, laptop, bottle;

	if (array == NULL)
		return (-1);

for (laptop = 0, bottle = size - 1; laptop >= bottle;)
	{
		printf("Searching in array: ");
		for (y = laptop; y < bottle; y++)
			printf("%d, ", array[y]);
		printf("%d\n", array[y]);

		y = laptop + (bottle - laptop) / 2;
		if (array[i] == value)
			return (y);
		if (array[i] > value)
			bottle = y - 1;
		else
			laptop = y + 1;
	}

	return (-1);
}		
