#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: string to print
 */

void puts_half(char *str)
{
	int length;
	int n;
	int shalf;

	length = 0;
	while (str[length] != '\0')
		length++;

	shalf = length / 2;

	for (n = shalf; str[n] != '\0'; n++)
		_putchar(str[n]);
	_putchar('\n');
}
