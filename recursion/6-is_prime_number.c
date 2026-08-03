#include "main.h"

/**
 * check_divisor - helper that recursively checks for divisors
 * @n: the number being tested
 * @i: the current divisor being tried
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_divisor(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_divisor(n, i + 1));
}

/**
 * is_prime_number - returns 1 if n is prime, 0 otherwise
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (check_divisor(n, 2));
}