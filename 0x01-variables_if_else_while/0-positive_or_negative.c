#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdio.h>

/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf(n, "is positive %d\n");
	}
	else if (n == 0)
	{
		printf(n, "is zero %d\n");
	}
	else
	{
		printf(n, "is negative %d\n");
	}
	return (0);
}
