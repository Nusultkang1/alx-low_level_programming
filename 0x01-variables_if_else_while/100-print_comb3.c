#include <stdio.h>

/**
 * main - prints all possible different combination of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, e;

	n = 48;
	e = 48;

	while (e < 58)
	{
		n = 48;
		while (n < 58)
		{
			if (e != n && e < n)
			{
				putchar(e);
				putchar(n);
				if (n == 57 && e == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			n++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
