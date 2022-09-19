#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: first parameter.
 * Description: *s is a pointer to s.
 * Return: 0.
 */

void print_rev(char *s)
{
	int n, m, str;

	n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	str = n;

	for (m = str - 1; m >= 0; m--)
	{
		_putchar(s[m]);
	}
	_putchar('\n');
}
