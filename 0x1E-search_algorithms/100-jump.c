#include <math.h>
#include "search_algos.h"

/**
 * jmp_search - Performs a search on a sorted array using jmp search
 *
 * Description: Always outputs a value each time it is compared in the array
 *
 * @array: A pointer to the first element in the array on which the leap search is to be performed
 * @size: The size of the array
 * @value: The integer to be searched in the array.
 *
 * Return: Always EXIT_SUCCESS
 */
int jmp_search(int *array, size_t size, int value)
{
	int jmp = sqrt(size);
	int strt = 0;
	int sect_end = 0;

	if (array == NULL || size == 0 || array[strt] > value)
		return (-1);

	while (sect_end < (int)size)
	{
		if (array[sect_end] < value)
		{
			printf("Value checked array[%d] = [%d]\n", sect_end, array[sect_end]);

			strt = sect_end;
			sect_end += jmp;
		}
		else
		{
			break;
		}
	}

	printf("Value found between indexes [%d] and [%d]\n", strt, sect_end);

	if (sect_end > (int)size - 1)
		sect_end = size - 1;

	while (strt <= sect_end)
	{
		printf("Value checked array[%d] = [%d]\n", strt, array[strt]);
		if (array[strt] == value)
			return (strt);
		strt++;
	}

	return (-1);
}
