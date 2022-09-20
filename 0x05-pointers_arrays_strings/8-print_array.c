#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: first parameter.
 * @n: second parameter.
 * Description: *a is a pointer to a
 * Return: 0.
 */

void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		if (m == 0)
		{
			printf("%d", a[m]);
		}
		else
		{
			printf(", %d", a[m]);
		}
	}
	printf("\n");
}
