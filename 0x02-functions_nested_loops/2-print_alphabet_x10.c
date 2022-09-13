#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10
 *
 * Description: prints 10 times
 * Return: Always(0).
 */

void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
		char j = 'a';

		while (j <= 'z')
		{
			_putchar(j);

			j++;
		}
		n++;
		_putchar('\n');
	}
}
