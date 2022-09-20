#include "main.h"

/**
 * puts2 - prints every other character of a string.
 * @str: first parameter.
 * Description: *str is a pointer to str
 * Return; 0.
 */

void puts2(char *str)
{
	int n, len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (n = 0; n  < len; n += 2)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
