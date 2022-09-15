#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: no return.
 */

void more_numbers(void)
{
	int n, m;

	for (n = 0; n <= ; n++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m >= 10)
			{
				_putchar((m / 10) + 48);
			}
			_putchar((m % 10) + 48);
		}
	}
}
