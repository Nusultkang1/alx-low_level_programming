#include "search_algos.h"
/**
 * print_array - prints an array of integers
 * @array: pointer to the first element of the array to be printed
 * @size: size of the array.
 *
 * Return: nothing.
 */

void print_array(int *array, int size)
{
	int x;

	if (array == NULL || size == 0)
		return;

	printf("Searching in array: ");

	for (x = 0; x < size; x++)
	{
		if (x == 0)
		{
			printf("%d", array[x]);
		}
		else
		{
			printf(", %d", array[x]);
		}

	}

	printf("\n");
}

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
	int left = 0;
	int right = size - 1;
	int mid;

	if (array == NULL || size == 0 || array[0] > value)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) / 2;

		print_array(&array[left], (right - left) + 1);

		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			right = mid - 1;

		else
			left = mid + 1;
	}

	return (-1);
}		
