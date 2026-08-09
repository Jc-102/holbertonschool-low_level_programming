#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to newly allocated space containing s1
 * followed by s2, null terminated, or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	int length1;
	int length2;
	int i;
	int j;

	length1 = 0;
	length2 = 0;

	if (s1 != NULL)
		while (s1[length1] != '\0')
			length1++;

	if (s2 != NULL)
		while (s2[length2] != '\0')
			length2++;

	result = malloc(sizeof(char) * (length1 + length2 + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		result[i] = s1[i];

	for (j = 0; j < length2; j++)
		result[length1 + j] = s2[j];

	result[length1 + length2] = '\0';

	return (result);
}
