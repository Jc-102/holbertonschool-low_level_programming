#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - prints a char from a va_list
 * @args: the va_list to pull from
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_integer - prints an int from a va_list
 * @args: the va_list to pull from
 */
void print_integer(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float from a va_list
 * @args: the va_list to pull from
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string from a va_list, or (nil)
 * @args: the va_list to pull from
 */

void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - prints anything, based on a format string
 * @format: list of types of arguments passed
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	char *separator = "";
	format_t formats[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);
	i = 0;
	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *(formats[j].type))
			{
				printf("%s", separator);
				formats[j].f(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
