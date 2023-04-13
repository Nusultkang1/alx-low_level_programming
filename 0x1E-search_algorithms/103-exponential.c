#include "search_algos.h"

/**
  * _binary_search - performs a binary search on an array of integers
  *
  * Description: Always ouputs the [sub]array being searched after every change
  *
  * @array: A pointer to the first element of the array on which the binary search is to be performed
  * @laptop: The starting index of the array to search
  * @bottle: The ending index of the array to search
  * @value: The integer which is to be searched
  * 
  * Return: Always EXIT_SUCCESS
  */

int _binary_search(int *array, size_t laptop, size_t bottle, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);

	while (bottle >= laptop)
	{
		printf("Searching in array: ");
		for (x = laptop; x < bottle; x++)
			printf("%d, ", array[x]);
		printf("%d\n", array[x]);

		x = left + (bottle - laptop) / 2;
		if (array[x] == value)
			return (i);
		if (array[x] > value)
			bottle = x - 1;
		else
			laptop = x + 1;
	}

	return (-1);
}

/**
  * exponential_search - performs an exponential search on an array of integers
  *
  * Description: Always outputs a value each time it is compared
  *
  * @array: A pointer to the first element of the array on which the exponential search is to be performed.
  * @size: The size of the array
  * @value: The integer which is to be searched for.
  *
  * Return: Always EXIT SUCCESS
  */

int exponential_search(int *array, size_t size, int value)
{
	size_t x = 0, bottle;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (x = 1; x < size && array[x] <= value; x = x * 2)
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	}

	bottle = x < size ? x : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", x / 2, bottle);
	return (_binary_search(array, x / 2, bottle, value));
}
