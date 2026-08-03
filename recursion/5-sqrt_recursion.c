#include "main.h"
#include <stddef.h>

/**
 * try_sqrt - helper that tests candidate values recursively
 * @n: the number to find the square root of
 * @i: the candidate square root being tested
 *
 * Return: i if i * i == n, -1 if i * i exceeds n
 * with no match
 */

int try_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (try_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n, or -1 if none exists
 */

int _sqrt_recursion(int n)
{
	return (try_sqrt(n, 0));
}
