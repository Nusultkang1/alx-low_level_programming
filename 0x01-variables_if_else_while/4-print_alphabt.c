#include <stdio.h>
/**
 * main - prints all lower case letters of the alphabet save e and q
 *
 * Return: 0 when successful
 */
int main(void)
{
	char lcase, ease, ques;

	ease = 'e';
	ques = 'q';

	for (lcase = 'a'; lcase <= 'z'; lcase++)
	{
	if (lcase != ease && lcase != ques)
	putchar(lcase);
	}
	putchar('\n');
	return (0);
}
