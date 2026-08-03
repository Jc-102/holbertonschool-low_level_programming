#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: the string to search
 * @needle: the substring to find
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int n;
	unsigned int m;

	for (n = 0; haystack[n] != '\0'; n++)
	{
		for (m = 0; needle[m] != '\0' && haystack[n + m] == needle[m]; m++)
			;

		if (needle[m] == '\0')
			return (haystack + m - m + n);
	}

	return (NULL);
}