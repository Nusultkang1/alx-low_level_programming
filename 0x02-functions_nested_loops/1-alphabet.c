#include "main.h"

/**
 * main - prints the alphabet in lower case.
 *
 * Return: void
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();

	return (0);
}

void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar("\n");
}
