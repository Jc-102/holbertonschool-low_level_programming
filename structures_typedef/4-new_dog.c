#include "main.h"
#include "dog.h"
#include <stdlib.h>

/**
 * dup_str - duplicates a string using malloc
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL on
 * failure or if str is NULL
 */

char *dup_str(char *str)
{
	char *copy;
	unsigned int len;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[len] = '\0';

	return (copy);
}

/**
 * new_dog - creates a new dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Return: pointer to the newly created dog, or NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = dup_str(name);
	if (d->name == NULL && name != NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = dup_str(owner);
	if (d->owner == NULL && owner != NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->age = age;

	return (d);
}
