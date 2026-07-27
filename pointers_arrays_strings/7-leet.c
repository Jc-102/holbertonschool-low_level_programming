#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: the string to encode
 *
 * Return: a pointer to the encoded string
 */

char *leet(char *s)
{
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char nums[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letters[j])
				s[i] = nums[j];
		}
	}

	return (s);
}
