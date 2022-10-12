#include "main.h"

/**
 * print_name - prints a name
 * @name: name to be printed
 * : function pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
