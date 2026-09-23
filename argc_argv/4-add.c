#include <stdio.h>

/**
 * is_digit - checks if a string contains only digit characters
 * @s: the string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */

int is_digit(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}

	return (1);
}

/**
 * str_to_int - converts a digit string to an int
 * @s: the string to convert
 *
 * Return: the integer value
 */

int str_to_int(char *s)
{
	int i;
	int num;

	num = 0;

	for (i = 0; s[i] != '\0'; i++)
		num = num * 10 + (s[i] - '0');

	return (num);
}

/**
 * main - adds positive numbers passed as arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 if an argument is not a valid number
 */

int main(int argc, char *argv[])
{
	int i;
	int total;

	total = 0;

	for (i = 1; i < argc; i++)
	{
		if (!is_digit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		total += str_to_int(argv[i]);
	}

	printf("%d\n", total);

	return (0);
}
