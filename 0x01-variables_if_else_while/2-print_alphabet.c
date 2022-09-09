#include <stdio.h>

/**
 * main - Prints the alphabets in succession.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char albet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(albet[i]);
	}
	putchar('\n');
	return (0);
}
