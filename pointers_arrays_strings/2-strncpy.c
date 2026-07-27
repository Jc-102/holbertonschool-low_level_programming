#include "main.h"

/**
 * _strncpy - copies a string, working exactly like the standard strncpy
 * @dest: the destination buffer
 * @src: the source string
 * @n: the maximum number of bytes to copy
 *
 * Return: a pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
