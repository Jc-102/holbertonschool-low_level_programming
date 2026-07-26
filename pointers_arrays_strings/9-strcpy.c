#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest
 * @dest: the destination buffer
 * @src: the string
 *
 * Return: a pointer
 */

char *_strcpy(char *dest, char *src)
{
	int n;

	n = 0;
	
	for (n = 0; src[n] != '\0'; n++)
		dest[n] = src[n];
	dest[n] = '\0';

	return (dest);
}
