#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int n;

	for (n = 0; n <= 14; n++)
	{
		printf("%d", n);

		if (n % 20 == 0)
		{
			printf("\n");
		}
	}
}
