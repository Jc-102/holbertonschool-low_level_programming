#include "main.h"
#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name using a given function
 * @name: the name to print
 * @f: pointer to a function that takes a char * and prints it
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
