#include "main.h"

/**
 * largest_number - returns the largest of 3 given numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number of the three.
 */

int largest_number(int a, int b, int c)
{
	int largest = b;

	if (a > b)
	{
		largest = a;
	}
	else if (c > b)
	{
		largest = c;
	}
	return (largest);
}
