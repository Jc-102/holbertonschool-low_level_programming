#include "main.h"

/**
 * _isupper - checks uppercase character
 *
 * Return: 1 if c is uppercase and 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
