#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 *
 * @n: input number as an integer
 *
 * Return: the absolute value of the integer
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
