#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the string to modify
 *
 * Return: a pointer to the modified string
 */

char *cap_string(char *s)
{
	int n;
	int symbol;

	n = 0;
	symbol = 1;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (symbol && s[n] >= 'a' && s[n] <= 'z')
			s[n] = s[n] - 32;
		if (s[n] == ' ' || s[n] == '\t' || s[n] == '\n' ||
		    s[n] == ',' || s[n] == ';' || s[n] == '.' ||
		    s[n] == '!' || s[n] == '?' || s[n] == '"' ||
		    s[n] == '(' || s[n] == ')' || s[n] == '{' ||
		    s[n] == '}')
			symbol = 1;
		else
			symbol = 0;
	}

	return (s);
}