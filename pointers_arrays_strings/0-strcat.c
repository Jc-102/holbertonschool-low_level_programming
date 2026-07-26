#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the string to append
 *
 * Return: a pointer to dest
 */

char *_strcat(char *dest, char *src)
{
    int n;
    int m;
    
	for (n = 0; dest[n] != '\0'; n++)
		;

	for (m = 0; src[m] != '\0'; m++)
	{
		dest[n] = src[m];
		n++;
	}
	dest[n] = '\0';

	return (dest);
}