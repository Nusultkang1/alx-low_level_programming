#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments received
 * @argc: argument count
 * @argv: argument vector
 * Return: all arguments
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
