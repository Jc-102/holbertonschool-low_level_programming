#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to find
 *
 * Return: pointer to the first occurrence of c in s, or NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int n;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] == c)
			return (s + n);
	}

	if (s[n] == c)
		return (s + n);

	return (NULL);
}
