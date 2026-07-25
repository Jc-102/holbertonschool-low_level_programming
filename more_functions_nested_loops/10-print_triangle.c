#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int r;
	int c;
	int s;

	for (r = 1; r <= size; r++)
	{
		for (s = 0; s < size - r; s++)
			_putchar(' ');
		for (c = 0; c < r; c++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
