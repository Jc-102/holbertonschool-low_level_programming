#include "main.h"
#include <stddef.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have a natural square root
 */

int try_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (try_sqrt(n, i + 1));
}

int _sqrt_recursion(int n)
{
	return (try_sqrt(n, 0));
}
