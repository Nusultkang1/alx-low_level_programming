#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - print all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d\n", n);
	}
	putchar('\n');
	return (0);
}
