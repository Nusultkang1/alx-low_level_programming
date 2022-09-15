#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: first parameter to indicate the number of times /
 * should be printed.
 *
 * Return: no return.
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (i <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
