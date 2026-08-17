#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct format - maps a format character to its print function
 * @type: the format character (as a string, e.g. "c", "i")
 * @f: pointer to the function that prints a value of that type
 */

typedef struct format
{
	char *type;
	void (*f)(va_list);
} format_t;

void print_char(va_list args);
void print_integer(va_list args);
void print_float(va_list args);
void print_string(va_list args);

#endif
