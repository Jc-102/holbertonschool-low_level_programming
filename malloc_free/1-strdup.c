#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory containing a copy of str
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if
 * str is NULL or malloc fails
 */

char *_strdup(char *str)
{
	char *copy;
	int lenght;
	int i;

	if (str == NULL)
		return (NULL);

	for (lenght = 0; str[lenght] != '\0'; lenght++)
		;
		
	copy = malloc(sizeof(char) * (lenght + 1));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < lenght; i++)
		copy[i] = str[i];
	copy[lenght] = '\0';

	return (copy);
}
