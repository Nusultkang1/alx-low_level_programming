#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: no return.
 */

void more_numbers(void)
{
	int n, ch;

	for (n = 0; n <= ; n++)
	{
		for (ch = 0; ch <= 14; ch++)
		{
			if (ch >= 10)
			{
				_putchar((ch / 10) + 48);
			}
			_putchar((ch % 10) + 48);
		}
	}
}
