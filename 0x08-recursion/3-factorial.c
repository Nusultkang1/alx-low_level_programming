#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number whose factorial is to be determined
 * Return: the factorial.
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
