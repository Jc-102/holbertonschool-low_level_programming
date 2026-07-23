#include "main.h"

/**
 *print_square - prints a square
 */

void print_square(int size)
{
	int r;
	int c;

	for (r = 0; r < size; r++)
	{
		for (c = 0; c < size; c++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
