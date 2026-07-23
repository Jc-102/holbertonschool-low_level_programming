#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times \ should be printed
 */

void print_diagonal(int n)
{
	int m;
	int s;

	for (m = 0; m < n; m++)
	{
		for (s = 0; s < m; s++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}
