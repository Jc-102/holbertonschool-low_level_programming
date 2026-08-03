#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to check
 * @accept: the string of accepted bytes
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	unsigned int n;
	unsigned int m;
	int i;

	for (n = 0; s[n] != '\0'; n++)
	{
		i = 0;

		for (m = 0; accept[m] != '\0'; m++)
		{
			if (s[n] == accept[m])
			{
				i = 1;
				break;
			}
		}

		if (i == 0)
			break;

		count++;
	}

	return (count);
}
