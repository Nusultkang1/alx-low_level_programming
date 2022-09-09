#include <stdio.h>

/**
 * main - Prints the alphabet in both cases
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char albet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(albet[i]);
	}
	putchar('\n');
	return (0);
}
