#include <stdio.h>

/**
 * main - prints natural numbers below 1024 that are multiples
 * of 5 or 3
 *
 * Return: Always 0.
 */

int main(void)
{
	int x, y;

	for (x = 1; x < 1024; x++)
	{
		if ((x % 5) == 0 || (x % 3) == 0)
		{
			y += x;
		}
	}
	printf("%d\n", y);
	return (0);
}
