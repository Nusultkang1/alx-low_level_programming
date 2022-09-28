#include "main.h"

/**
 * _puts_recursion - prints  a string followed by a new line.
 * @s: the string to be printed.
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
	int n;

	if (!(s[n] >= 'a') && !(s[n] <= 'z'))
	{
		return (0);
	}
	n++;
	return (_puts_recursion(s + 1));
}
