#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first parameter.
 * @b: second parameter.
 * Description: *a and *b are pointers to a and b.
 * Return: 0.
 */

void swap_int(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
