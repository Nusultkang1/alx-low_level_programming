#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed
 * @argc: argument count
 * @argv: argument vector
 * Return: no. of arguments
 */

int main(int argc, char *argv[])
{
	int i;
	int count = 0;

	for (i = 0; i < argc; i++)
	{
		count += i;
	}
	printf("%d\n", count);
	return (0);
}
