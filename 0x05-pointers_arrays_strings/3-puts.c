#include "main.h"

/**
 * _puts - prints a string followed by a new line.
 * @str: first parameter.
 * Description: *str is a pointer to str.
 * Return: 0.
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		i++;

		_putchar(*(str + i));
	}
	_putchar('\n');
}
