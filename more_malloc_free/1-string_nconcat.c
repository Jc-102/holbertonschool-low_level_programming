#include "main.h"
#include <stdlib.h>

/** * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes to concatenate from s2
 *
 * Return: a pointer to the newly allocated space in memory containing the
 * concatenated string, or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	int length1 = 0;
	int length2 = 0;
	int i;

	if (s1 != NULL)
	{
		while (s1[length1] != '\0')
			length1++;
	}

	if (s2 != NULL)
	{
		while (s2[length2] != '\0')
			length2++;
	}

	if (n < length2)
		length2 = n;

	result = malloc_checked(length1 + length2 + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		result[i] = s1[i];

	for (i = 0; i < length2; i++)
		result[length1 + i] = s2[i];

	result[length1 + length2] = '\0';

	return (result);
}
