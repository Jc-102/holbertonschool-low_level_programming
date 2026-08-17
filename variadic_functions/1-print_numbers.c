#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to print between numbers
 * @n: the number of integers passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
			printf("%s", separator);

		num = va_arg(args, int);
		printf("%d", num);
	}

	va_end(args);

	printf("\n");
}
