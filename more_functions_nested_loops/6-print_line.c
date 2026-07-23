#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times _ should be printed
 */

void print_line(int n)
{
	int m;

	for (m = 0; m < n; m++)
		_putchar('_');
	_putchar('\n');
}
