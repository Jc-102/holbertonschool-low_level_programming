#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string
 *
 * Return: the converted integer, or 0 if no digits are found
 */

int _atoi(char *s)
{
	int n;
	int sign;
	int result;

	sign = 1;
	result = 0;

	for (n = 0; s[n] != '\0' && (s[n] < '0' || s[n] > '9'); n++)
	{
		if (s[n] == '-')
			sign = -1;
	}

	while (s[n] >= '0' && s[n] <= '9')
	{
		result = result * 10 + (s[n] - '0');
		n = n + 1;
	}

	return (result * sign);
}
