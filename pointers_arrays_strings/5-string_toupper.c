#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: the string to modify
 *
 * Return: a pointer to the modified string
 */

char *string_toupper(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] >= 'a' && s[n] <= 'z')
			s[n] = s[n] - 32;
	}

	return (s);
}
