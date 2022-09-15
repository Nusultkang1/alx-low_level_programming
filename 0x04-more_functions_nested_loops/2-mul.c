#include "main.h"

/**
 * mul - multiplies two numbers
 *
 * @a: first parameter
 * @b: second parameter
 *
 * Description: checks the code
 *
 * Return: Always 0.
 */

int mul(int a, int b);

int main(void)
{
	printf("%d\n", mul(100, 100));
	return (0);
}

int mul(int a, int b)
{
	return (a * b);
}
