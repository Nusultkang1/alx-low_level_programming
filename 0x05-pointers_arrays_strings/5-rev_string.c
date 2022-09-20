#include "main.h"

/**
 * rev_string - reverses a string
 * @s: first parameter.
 * Description: *s is a poiter to s.
 * Return: 0.
 */

void rev_string(char *s)
{
	char tmp;
	int n, m, o;

	m = 0;
	o = 0;

	while (s[m] != '\0')
	{
		m++;
	}

	o = m - 1;

	for (n = 0; n < m / 2; n++)
	{
		tmp = s[n];
		s[n] = s[o];
		s[o--] = tmp;
	}
}
