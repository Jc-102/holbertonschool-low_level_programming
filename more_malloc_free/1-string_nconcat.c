#include "main.h"
#include <stdlib.h>

/** *string_nconcat - concatenates two strings
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
	unsigned int length1;
	unsigned int length2;
	unsigned int use2;
	unsigned int i;
	unsigned int j;

	length1 = 0;
	length2 = 0;

	if (s1 != NULL)
		while (s1[length1] != '\0')
			length1++;

	if (s2 != NULL)
		while (s2[length2] != '\0')
			length2++;

	use2 = (n >= length2) ? length2 : n;

	result = malloc(sizeof(char) * (length1 + use2 + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		result[i] = s1[i];

	for (j = 0; j < use2; j++)
		result[length1 + j] = s2[j];

	result[length1 + use2] = '\0';

	return (result);
}
